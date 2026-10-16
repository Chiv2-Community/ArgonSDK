#if WITH_EDITOR && WITH_DEV_AUTOMATION_TESTS

#include "Engine/Level.h"
#include "Engine/Texture2D.h"
#include "Engine/World.h"
#include "HAL/FileManager.h"
#include "Internationalization/StringTableRegistry.h"
#include "Internationalization/Text.h"
#include "Misc/AutomationTest.h"
#include "Misc/Paths.h"
#include "TBLMapSummary.h"
#include "TBLWorldSettings.h"
#include "UObject/Package.h"
#include "UObject/UObjectHash.h"

namespace
{
    struct FMapSummaryTestWorld
    {
        UPackage* Package;
        UWorld* World;
        ATBLWorldSettings* Settings;

        explicit FMapSummaryTestWorld(const TCHAR* Prefix)
        {
            const FString Name = FString(Prefix) + FGuid::NewGuid().ToString(EGuidFormats::Digits);
            Package = CreatePackage(nullptr, *(TEXT("/Temp/") + Name));
            World = NewObject<UWorld>(Package, *Name, RF_Public | RF_Standalone);
            World->WorldType = EWorldType::Editor;
            World->InitializeNewWorld(UWorld::InitializationValues()
                                          .InitializeScenes(false)
                                          .AllowAudioPlayback(false)
                                          .RequiresHitProxies(false)
                                          .CreatePhysicsScene(false)
                                          .CreateNavigation(false)
                                          .CreateAISystem(false)
                                          .CreateFXSystem(false));
            Settings = Cast<ATBLWorldSettings>(World->GetWorldSettings());
            if (!Settings)
            {
                Settings = World->SpawnActor<ATBLWorldSettings>();
                World->PersistentLevel->SetWorldSettings(Settings);
            }
        }

        ~FMapSummaryTestWorld()
        {
            World->DestroyWorld(false);
            // Do not leave standalone test objects alive after the test.
            TArray<UObject*> Objects;
            GetObjectsWithOuter(Package, Objects);
            for (UObject* Object : Objects)
            {
                Object->ClearFlags(RF_Standalone);
            }
            Package->SetDirtyFlag(false);
        }
    };
} // namespace

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMapSummarySaveTest, "ArgonSDK.MapSummary.Save",
                                 EAutomationTestFlags::EditorContext |
                                     EAutomationTestFlags::EngineFilter)

bool FMapSummarySaveTest::RunTest(const FString& Parameters)
{
    FMapSummaryTestWorld Fixture(TEXT("MapSummarySave"));
    ATBLWorldSettings* Settings = Fixture.Settings;
    Settings->MapName = NSLOCTEXT("ArgonSDKMapSummaryTest", "Name", "SDK test arena");
    Settings->MapDescription =
        NSLOCTEXT("ArgonSDKMapSummaryTest", "Description", "This is a Horde Mode test arena");
    Settings->AttackingFaction = EFaction::Mason;
    Settings->GamemodeType = EGameModeType::TeamDeathMatch;

    const FString Directory = FPaths::ProjectSavedDir() / TEXT("Automation/MapSummary");
    IFileManager::Get().MakeDirectory(*Directory, true);
    const FString Filename = Directory / TEXT("MapSummarySave.umap");
    TestNull(TEXT("No summary before the first save"), Settings->MapSummary);
    const bool Saved =
        UPackage::SavePackage(Fixture.Package, Fixture.World, RF_Public | RF_Standalone, *Filename);
    TestTrue(TEXT("First map save succeeds"), Saved);
    UTBLMapSummary* Summary = Settings->MapSummary;
    if (!TestNotNull(TEXT("First save creates the summary"), Summary))
    {
        return false;
    }
    TestEqual(TEXT("Summary is directly in the map package"), Summary->GetOuter(),
              static_cast<UObject*>(Fixture.Package));
    TestEqual(TEXT("Shipping lookup name"), Summary->GetFName(), FName(TEXT("MapSummary")));
    TestTrue(TEXT("Summary has the shipping standalone flag"), Summary->HasAnyFlags(RF_Standalone));
    TestTrue(TEXT("Localized name is retained"), Summary->MapName.IdenticalTo(Settings->MapName));
    TestTrue(TEXT("Localized description is retained"),
             Summary->MapDescription.IdenticalTo(Settings->MapDescription));
    TestEqual(TEXT("Faction copied"), Summary->AttackingFaction, Settings->AttackingFaction);
    TestEqual(TEXT("Game mode copied"), Summary->GamemodeType, Settings->GamemodeType);

    // Leave a first-save fixture for verification in a fresh editor process.
    // Loading in this process would simply return the already resident objects.
    Settings->MapDescription = FText::FromString(TEXT("Updated description"));
    Settings->AttackingFaction = EFaction::Agatha;
    Settings->GamemodeType = EGameModeType::TeamObjective;
    Settings->PreSave(nullptr);
    TestEqual(TEXT("Later saves reuse the same summary"), Settings->MapSummary, Summary);
    TestTrue(TEXT("Description updates"),
             Summary->MapDescription.IdenticalTo(Settings->MapDescription));
    TestEqual(TEXT("Faction updates"), Summary->AttackingFaction, Settings->AttackingFaction);
    TestEqual(TEXT("Game mode updates"), Summary->GamemodeType, Settings->GamemodeType);
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMapSummaryReloadTest, "ArgonSDK.MapSummary.Reload",
                                 EAutomationTestFlags::EditorContext |
                                     EAutomationTestFlags::EngineFilter)

bool FMapSummaryReloadTest::RunTest(const FString& Parameters)
{
    const FString Filename =
        FPaths::ProjectSavedDir() / TEXT("Automation/MapSummary/MapSummarySave.umap");
    UPackage* Package = LoadPackage(nullptr, *Filename, LOAD_None);
    if (!TestNotNull(TEXT("Load the saved fixture (run Save first)"), Package))
    {
        return false;
    }
    UTBLMapSummary* Summary = FindObject<UTBLMapSummary>(Package, TEXT("MapSummary"));
    if (!TestNotNull(TEXT("First-save summary was serialized to disk"), Summary))
    {
        return false;
    }
    TestEqual(TEXT("Saved map name"), Summary->MapName.ToString(), FString(TEXT("SDK test arena")));
    TestEqual(TEXT("Saved map description"), Summary->MapDescription.ToString(),
              FString(TEXT("This is a Horde Mode test arena")));
    const TOptional<FString> Namespace = FTextInspector::GetNamespace(Summary->MapDescription);
    const TOptional<FString> Key = FTextInspector::GetKey(Summary->MapDescription);
    if (TestTrue(TEXT("Saved text has a localization namespace"), Namespace.IsSet()))
    {
        TestTrue(TEXT("Saved localization namespace retained"),
                 Namespace.GetValue().Contains(TEXT("ArgonSDKMapSummaryTest")));
    }
    if (TestTrue(TEXT("Saved text has a localization key"), Key.IsSet()))
    {
        TestEqual(TEXT("Saved localization key"), Key.GetValue(), FString(TEXT("Description")));
    }
    UWorld* World = UWorld::FindWorldInPackage(Package);
    ATBLWorldSettings* Settings =
        World ? Cast<ATBLWorldSettings>(World->GetWorldSettings()) : nullptr;
    if (TestNotNull(TEXT("Reloaded world settings"), Settings))
    {
        TestEqual(TEXT("World settings references the package-level export"), Settings->MapSummary,
                  Summary);
    }
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMapSummaryIsolationTest, "ArgonSDK.MapSummary.Isolation",
                                 EAutomationTestFlags::EditorContext |
                                     EAutomationTestFlags::EngineFilter)

bool FMapSummaryIsolationTest::RunTest(const FString& Parameters)
{
    FMapSummaryTestWorld First(TEXT("MapSummaryOwner"));
    FMapSummaryTestWorld Second(TEXT("MapSummaryCopy"));
    First.Settings->MapDescription = FText::FromString(TEXT("Original"));
    First.Settings->PreSave(nullptr);
    Second.Settings->MapSummary = First.Settings->MapSummary;
    Second.Settings->MapDescription = FText::FromString(TEXT("Copy"));
    Second.Settings->PreSave(nullptr);
    TestTrue(TEXT("Copied maps get their own summary"),
             Second.Settings->MapSummary != First.Settings->MapSummary);
    TestEqual(TEXT("Original map is not modified"),
              First.Settings->MapSummary->MapDescription.ToString(), FString(TEXT("Original")));
    TestEqual(TEXT("Copied summary belongs to the copied map"),
              Second.Settings->MapSummary->GetOuter(), static_cast<UObject*>(Second.Package));

    const FName TableId(*FGuid::NewGuid().ToString(EGuidFormats::Digits));
    FStringTableRegistry& Tables = FStringTableRegistry::Get();
    Tables.Internal_NewLocTable(TableId, TEXT("ArgonSDKMapSummaryTest"));
    Tables.Internal_SetLocTableEntry(TableId, TEXT("Description"),
                                     TEXT("String table description"));
    Second.Settings->MapDescription = FText::FromStringTable(TableId, TEXT("Description"));
    Second.Settings->PreSave(nullptr);
    FName SavedTableId;
    FString SavedKey;
    TestTrue(TEXT("Summary retains the string table reference"),
             Tables.FindTableIdAndKey(Second.Settings->MapSummary->MapDescription, SavedTableId,
                                      SavedKey));
    TestEqual(TEXT("String table identity retained"), SavedTableId, TableId);
    TestEqual(TEXT("String table key retained"), SavedKey, FString(TEXT("Description")));
    Second.Settings->MapDescription = FText::GetEmpty();
    Second.Settings->PreSave(nullptr);
    TestTrue(TEXT("Clearing description clears stale summary text"),
             Second.Settings->MapSummary->MapDescription.IsEmpty());
    Tables.UnregisterStringTable(TableId);

    Second.Settings->MapSummary = nullptr;
    Second.Package->SetPackageFlags(PKG_PlayInEditor);
    Second.Settings->PreSave(nullptr);
    TestNull(TEXT("PIE does not create or assign metadata"), Second.Settings->MapSummary);
    Second.Package->ClearPackageFlags(PKG_PlayInEditor);
    Second.Settings->SetFlags(RF_Transient);
    Second.Settings->PreSave(nullptr);
    TestNull(TEXT("Transient actors do not create metadata"), Second.Settings->MapSummary);
    Second.Settings->ClearFlags(RF_Transient);

    FMapSummaryTestWorld Conflict(TEXT("MapSummaryConflict"));
    UObject* Occupant = NewObject<UTexture2D>(Conflict.Package, TEXT("MapSummary"));
    AddExpectedError(TEXT("is not a TBLMapSummary"), EAutomationExpectedErrorFlags::Contains, 1);
    Conflict.Settings->PreSave(nullptr);
    TestNull(TEXT("A conflicting export is not assigned as metadata"),
             Conflict.Settings->MapSummary);
    TestEqual(TEXT("A conflicting export is not replaced"),
              FindObject<UObject>(Conflict.Package, TEXT("MapSummary")), Occupant);
    return true;
}

#endif
