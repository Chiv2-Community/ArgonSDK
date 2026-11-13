#include "SDKReferenceRepairCommandlet.h"

#include "Blueprint/UserWidget.h"
#include "EdGraph/EdGraph.h"
#include "EdGraphSchema_K2.h"
#include "Engine/Blueprint.h"
#include "K2Node_CallFunction.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_Event.h"
#include "K2Node_ExecutionSequence.h"
#include "K2Node_FunctionEntry.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/FileHelper.h"
#include "Misc/PackageName.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "Serialization/JsonSerializer.h"
#include "UObject/UnrealType.h"
#include "UObject/Package.h"

IMPLEMENT_MODULE(FDefaultModuleImpl, SDKReferenceTools)

namespace
{
    const TCHAR* ReferencePaths[] = {
        TEXT("/Game/UI/WidgetsIngame/VOMenu/RadialVOMenu.RadialVOMenu"),
        TEXT("/Game/Interactables/Carryables/BaseCarryable_2hLoot/"
             "Carryable_CatapultRock.Carryable_CatapultRock"),
        TEXT("/Game/Interactables/Deployables/BearTrap/BP_BearTrap.BP_BearTrap")};

    bool RepairWheel(UBlueprint* Blueprint)
    {
        auto* Native = UUserWidget::StaticClass()->FindFunctionByName(TEXT("ListenForInputAction"));
        auto* Callback = FindFProperty<FDelegateProperty>(Native, TEXT("Callback"));
        FEdGraphPinType Type;
        if (!Callback || !GetDefault<UEdGraphSchema_K2>()->ConvertPropertyToPinType(Callback, Type))
            return false;
        int Found = 0;
        for (auto* Graph : Blueprint->FunctionGraphs)
            if (Graph->GetFName() == TEXT("BindActionInput"))
                for (auto* Node : Graph->Nodes)
                    if (auto* Entry = Cast<UK2Node_FunctionEntry>(Node))
                        for (auto& UserPin : Entry->UserDefinedPins)
                            if (UserPin->PinName == TEXT("Callback"))
                            {
                                UserPin->PinType = Type;
                                if (auto* Pin = Entry->FindPin(TEXT("Callback")))
                                    Pin->PinType = Type;
                                ++Found;
                            }
        return Found == 1;
    }

    const TCHAR* ProjectileEvents[] = {TEXT("BroadcastProjectileWorldBlockingHit"),
                                       TEXT("BroadcastNonWorldBlockingHit")};

    bool RepairProjectileEvents(UBlueprint* Blueprint)
    {
        auto* HitType = FindObject<UScriptStruct>(nullptr, TEXT("/Script/TBL.ProjectileHitParams"));
        if (!HitType)
            return false;
        int Found = 0;
        for (auto* Graph : Blueprint->UbergraphPages)
            for (auto* Node : Graph->Nodes)
                if (auto* Event = Cast<UK2Node_CustomEvent>(Node))
                    for (const TCHAR* Name : ProjectileEvents)
                        if (Event->CustomFunctionName == Name)
                            for (auto& UserPin : Event->UserDefinedPins)
                                if (UserPin->PinName == TEXT("ProjectileHit"))
                                {
                                    // The original shipping callbacks both take
                                    // FProjectileHitParams. Keep the event declaration and all
                                    // connections.
                                    UserPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
                                    UserPin->PinType.PinSubCategoryObject = HitType;
                                    if (auto* Pin = Event->FindPin(TEXT("ProjectileHit")))
                                        Pin->PinType = UserPin->PinType;
                                    ++Found;
                                }
        return Found == 2;
    }

    bool HasExpectedProjectileSignatures(UBlueprint* Blueprint)
    {
        auto* HitType = FindObject<UScriptStruct>(nullptr, TEXT("/Script/TBL.ProjectileHitParams"));
        for (const TCHAR* Name : ProjectileEvents)
        {
            auto* Function = Blueprint->GeneratedClass->FindFunctionByName(Name);
            auto* Parameter = Function
                                  ? FindFProperty<FStructProperty>(Function, TEXT("ProjectileHit"))
                                  : nullptr;
            if (!Parameter || Parameter->Struct != HitType ||
                !Function->HasAllFunctionFlags(FUNC_BlueprintCallable | FUNC_BlueprintEvent))
                return false;
        }
        return HitType != nullptr;
    }

    bool RepairRagdollEvents(UBlueprint* Blueprint)
    {
        TArray<UK2Node_CustomEvent*> Events;
        for (auto* Graph : Blueprint->UbergraphPages)
            for (auto* Node : Graph->Nodes)
                if (auto* Event = Cast<UK2Node_CustomEvent>(Node))
                {
                    const FName Name = Event->CustomFunctionName;
                    const bool Match =
                        Name == TEXT("OnRagdollAttach") || Name == TEXT("OnRagdollDetach");
                    if (!Match)
                        continue;
                    // These are empty SDK stubs. Refuse to discard user-added logic.
                    for (auto* Pin : Event->Pins)
                        if (Pin->LinkedTo.Num() != 0)
                        {
                            UE_LOG(LogTemp, Warning,
                                   TEXT("SDK_REFERENCE_REPAIR refuses linked event: %s"),
                                   *Event->GetPathName());
                            return false;
                        }
                    Events.Add(Event);
                }
        UClass* Interface = FindObject<UClass>(nullptr, TEXT("/Script/TBL.AttachRagdollInterface"));
        if (!Interface)
            return false;
        for (auto* Event : Events)
        {
            {
                // Interface overrides must be native event nodes, not custom
                // events which cause duplicate generated function declarations.
                auto* Override = NewObject<UK2Node_Event>(Event->GetGraph());
                Override->EventReference.SetExternalMember(Event->CustomFunctionName, Interface);
                Override->bOverrideFunction = true;
                Override->NodePosX = Event->NodePosX;
                Override->NodePosY = Event->NodePosY;
                Override->CreateNewGuid();
                Event->GetGraph()->AddNode(Override, false, false);
                Override->AllocateDefaultPins();
            }
            FBlueprintEditorUtils::RemoveNode(Blueprint, Event, true);
        }
        UE_LOG(LogTemp, Display, TEXT("SDK_REFERENCE_REPAIR asset=%s emptyLegacyEvents=%d"),
               *Blueprint->GetName(), Events.Num());
        return true;
    }

    bool TestLinkedEventGuards()
    {
        for (int Ragdoll = 0; Ragdoll < 2; ++Ragdoll)
        {
            auto* Blueprint = NewObject<UBlueprint>(GetTransientPackage());
            auto* Graph = NewObject<UEdGraph>(Blueprint);
            Blueprint->UbergraphPages.Add(Graph);
            const TCHAR* Names[] = {
                Ragdoll ? TEXT("OnRagdollAttach") : TEXT("BroadcastProjectileWorldBlockingHit"),
                Ragdoll ? TEXT("OnRagdollDetach") : TEXT("BroadcastNonWorldBlockingHit")};
            UK2Node_CustomEvent* Last = nullptr;
            for (const TCHAR* Name : Names)
            {
                Last = NewObject<UK2Node_CustomEvent>(Graph);
                Last->CustomFunctionName = Name;
                Graph->AddNode(Last, false, false);
                Last->AllocateDefaultPins();
                if (!Ragdoll)
                {
                    FEdGraphPinType Type;
                    Type.PinCategory = UEdGraphSchema_K2::PC_Struct;
                    Last->CreateUserDefinedPin(TEXT("ProjectileHit"), Type, EGPD_Output);
                }
            }
            auto* Call = NewObject<UK2Node_ExecutionSequence>(Graph);
            Graph->AddNode(Call, false, false);
            Call->AllocateDefaultPins();
            auto* Output = Last->FindPin(UEdGraphSchema_K2::PN_Then);
            auto* Input = Call->FindPin(UEdGraphSchema_K2::PN_Execute);
            if (!Output || !Input)
                return false;
            Output->MakeLinkTo(Input);
            // Even an earlier empty event must survive when a later event is linked.
            const bool Repaired =
                Ragdoll ? RepairRagdollEvents(Blueprint) : RepairProjectileEvents(Blueprint);
            if (Repaired != (Ragdoll == 0) || Graph->Nodes.Num() != 3 ||
                !Output->LinkedTo.Contains(Input) || !Input->LinkedTo.Contains(Output))
                return false;
        }
        UE_LOG(LogTemp, Display, TEXT("SDK_REFERENCE_SELF_TEST linkedCallbacksPreserved=PASS"));
        return true;
    }

    bool HasExpectedCallbackSignature(UBlueprint* Blueprint)
    {
        auto* Function = Blueprint->GeneratedClass->FindFunctionByName(TEXT("BindActionInput"));
        auto* Actual =
            Function ? FindFProperty<FDelegateProperty>(Function, TEXT("Callback")) : nullptr;
        auto* Native = UUserWidget::StaticClass()->FindFunctionByName(TEXT("ListenForInputAction"));
        auto* Expected = FindFProperty<FDelegateProperty>(Native, TEXT("Callback"));
        return Actual && Expected && Actual->SignatureFunction == Expected->SignatureFunction;
    }

    TSharedRef<FJsonObject> DescribeBlueprint(UBlueprint* Blueprint)
    {
        auto Result = MakeShared<FJsonObject>();
        Result->SetStringField(TEXT("asset"), Blueprint->GetPathName());
        Result->SetStringField(TEXT("parent"), GetPathNameSafe(Blueprint->ParentClass));
        TArray<UEdGraph*> Graphs;
        Blueprint->GetAllGraphs(Graphs);
        TArray<TSharedPtr<FJsonValue>> GraphValues;
        for (auto* Graph : Graphs)
        {
            auto GraphValue = MakeShared<FJsonObject>();
            GraphValue->SetStringField(TEXT("name"), Graph->GetName());
            TArray<TSharedPtr<FJsonValue>> NodeValues;
            for (auto* Node : Graph->Nodes)
            {
                auto Value = MakeShared<FJsonObject>();
                Value->SetStringField(TEXT("class"), Node->GetClass()->GetName());
                Value->SetStringField(TEXT("name"), Node->GetName());
                if (auto* Call = Cast<UK2Node_CallFunction>(Node))
                    Value->SetStringField(TEXT("symbol"),
                                          Call->FunctionReference.GetMemberName().ToString());
                if (auto* Event = Cast<UK2Node_Event>(Node))
                    Value->SetStringField(TEXT("symbol"),
                                          Event->EventReference.GetMemberName().ToString());
                if (auto* Event = Cast<UK2Node_CustomEvent>(Node))
                    Value->SetStringField(TEXT("symbol"), Event->CustomFunctionName.ToString());
                TArray<TSharedPtr<FJsonValue>> PinValues;
                for (auto* Pin : Node->Pins)
                {
                    auto PinValue = MakeShared<FJsonObject>();
                    PinValue->SetStringField(TEXT("name"), Pin->PinName.ToString());
                    PinValue->SetStringField(TEXT("type"), Pin->PinType.PinCategory.ToString());
                    PinValue->SetStringField(
                        TEXT("subtype"), GetPathNameSafe(Pin->PinType.PinSubCategoryObject.Get()));
                    PinValue->SetBoolField(TEXT("orphaned"), Pin->bOrphanedPin);
                    TArray<TSharedPtr<FJsonValue>> Links;
                    for (auto* Other : Pin->LinkedTo)
                        Links.Add(MakeShared<FJsonValueString>(Other->GetOwningNode()->GetName() +
                                                               TEXT(".") +
                                                               Other->PinName.ToString()));
                    PinValue->SetArrayField(TEXT("links"), Links);
                    PinValues.Add(MakeShared<FJsonValueObject>(PinValue));
                }
                Value->SetArrayField(TEXT("pins"), PinValues);
                NodeValues.Add(MakeShared<FJsonValueObject>(Value));
            }
            GraphValue->SetArrayField(TEXT("nodes"), NodeValues);
            GraphValues.Add(MakeShared<FJsonValueObject>(GraphValue));
        }
        Result->SetArrayField(TEXT("graphs"), GraphValues);
        FCompilerResultsLog Log;
        FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipSave,
                                                 &Log);
        Result->SetNumberField(TEXT("errors"), Log.NumErrors);
        Result->SetNumberField(TEXT("warnings"), Log.NumWarnings);
        if (Blueprint->GetFName() == TEXT("RadialVOMenu"))
        {
            auto* Function = Blueprint->GeneratedClass->FindFunctionByName(TEXT("BindActionInput"));
            auto* Callback =
                Function ? FindFProperty<FDelegateProperty>(Function, TEXT("Callback")) : nullptr;
            Result->SetStringField(
                TEXT("callbackSignature"),
                GetPathNameSafe(Callback ? Callback->SignatureFunction : nullptr));
        }
        return Result;
    }
} // namespace

USDKReferenceRepairCommandlet::USDKReferenceRepairCommandlet()
{
    IsClient = false;
    IsServer = false;
    IsEditor = true;
    LogToConsole = true;
}

int32 USDKReferenceRepairCommandlet::Main(const FString& Params)
{
    if (FParse::Param(*Params, TEXT("SelfTest")))
        return TestLinkedEventGuards() ? 0 : 7;
    FString ContentRoot;
    if (FParse::Value(*Params, TEXT("ContentRoot="), ContentRoot))
    {
        ContentRoot = FPaths::ConvertRelativePathToFull(ContentRoot);
        FPaths::NormalizeDirectoryName(ContentRoot);
        if (!FPaths::DirectoryExists(ContentRoot))
            return 2;
        FPackageName::RegisterMountPoint(TEXT("/Game/"), ContentRoot + TEXT("/"));
    }
    FString ReportPath = FPaths::ProjectSavedDir() / TEXT("SDKReferenceReport.json");
    FParse::Value(*Params, TEXT("Report="), ReportPath);
    TArray<TSharedPtr<FJsonValue>> Assets;
    TArray<UBlueprint*> Blueprints;
    bool Success = true;
    const bool Repair = FParse::Param(*Params, TEXT("Repair"));
    for (int Index = 0; Index < UE_ARRAY_COUNT(ReferencePaths); ++Index)
    {
        const TCHAR* Path = ReferencePaths[Index];
        auto* Blueprint = LoadObject<UBlueprint>(nullptr, Path, nullptr, LOAD_DisableCompileOnLoad);
        if (!Blueprint)
            return 3;
        Blueprints.Add(Blueprint);
        if (Repair)
        {
            const bool Repaired = Index == 0   ? RepairWheel(Blueprint)
                                  : Index == 1 ? RepairProjectileEvents(Blueprint)
                                               : RepairRagdollEvents(Blueprint);
            if (!Repaired)
                return 5;
            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
        }
        auto Report = DescribeBlueprint(Blueprint);
        Success &= Report->GetNumberField(TEXT("errors")) == 0 &&
                   Report->GetNumberField(TEXT("warnings")) == 0;
        if (Index == 0)
            Success &= HasExpectedCallbackSignature(Blueprint);
        if (Index == 1)
            Success &= HasExpectedProjectileSignatures(Blueprint);
        Assets.Add(MakeShared<FJsonValueObject>(Report));
        for (UClass* Parent = Blueprint->ParentClass; Parent; Parent = Parent->GetSuperClass())
            if (auto* ParentBlueprint = Cast<UBlueprint>(Parent->ClassGeneratedBy))
            {
                auto ParentReport = DescribeBlueprint(ParentBlueprint);
                Success &= ParentReport->GetNumberField(TEXT("errors")) == 0 &&
                           ParentReport->GetNumberField(TEXT("warnings")) == 0;
                Assets.Add(MakeShared<FJsonValueObject>(ParentReport));
            }
    }
    if (Repair && Success)
        for (auto* Blueprint : Blueprints)
        {
            auto* Package = Blueprint->GetOutermost();
            const FString Filename = FPackageName::LongPackageNameToFilename(
                Package->GetName(), FPackageName::GetAssetPackageExtension());
            if (!UPackage::SavePackage(Package, Blueprint, RF_Public | RF_Standalone, *Filename,
                                       GError, nullptr, false, true, SAVE_NoError))
                return 6;
        }
    auto Root = MakeShared<FJsonObject>();
    Root->SetBoolField(TEXT("success"), Success);
    Root->SetArrayField(TEXT("blueprints"), Assets);
    FString Json;
    FJsonSerializer::Serialize(Root, TJsonWriterFactory<>::Create(&Json));
    if (!FFileHelper::SaveStringToFile(Json, *ReportPath,
                                       FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
        return 4;
    UE_LOG(LogTemp, Display, TEXT("SDK_REFERENCE_REPORT success=%d report=%s"), Success,
           *ReportPath);
    return Success ? 0 : 1;
}
