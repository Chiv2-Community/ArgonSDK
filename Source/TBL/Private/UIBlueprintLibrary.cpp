#include "UIBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

void UUIBlueprintLibrary::UnregisterDisplayComponent(const TScriptInterface<IDisplayComponentInterface>& DisplayComponent) {
}

void UUIBlueprintLibrary::StopListeningForKeybindings() {
}

bool UUIBlueprintLibrary::ShouldDisableWorkInProgressFeatures() {
    return false;
}

void UUIBlueprintLibrary::SetInputActionMode(APlayerController* InPlayerController, EInputActionMode InInputActionMode) {
}

void UUIBlueprintLibrary::SendGlobalGameNotification(EGlobalGameNotificationCategory Category, FText Title, FText Body, FName Subcategory, UObject* Data, UObject* WorldContextObject) {
}

FEventReply UUIBlueprintLibrary::RouteOnPreviewKeyDownToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) {
    return FEventReply{};
}

FEventReply UUIBlueprintLibrary::RouteOnKeyUpToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) {
    return FEventReply{};
}

FEventReply UUIBlueprintLibrary::RouteOnKeyDownToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) {
    return FEventReply{};
}

FEventReply UUIBlueprintLibrary::RouteOnKeyCharToWidget(UWidget* Widget, const FGeometry& MyGeometry, const FCharacterEvent& InCharEvent) {
    return FEventReply{};
}

FEventReply UUIBlueprintLibrary::RouteOnAnalogValueChanged(UWidget* Widget, const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent) {
    return FEventReply{};
}

void UUIBlueprintLibrary::ResetAllAnimations(UUserWidget* Widget) {
}

void UUIBlueprintLibrary::RegisterDisplayComponent(const TScriptInterface<IDisplayComponentInterface>& DisplayComponent) {
}

FLinearColor UUIBlueprintLibrary::RandomLinearColorFromHsluv(float h_min, float h_max, float s_min, float s_max, float l_min, float l_max) {
    return FLinearColor{};
}

void UUIBlueprintLibrary::ListenForKeybindings() {
}

FLinearColor UUIBlueprintLibrary::LinearColorFromHsluv(float H, float S, float L) {
    return FLinearColor{};
}

FText UUIBlueprintLibrary::Key_GetShortDisplayName(const FKey& Key) {
    return FText::GetEmpty();
}

FName UUIBlueprintLibrary::Key_GetFName(const FKey& Key) {
    return NAME_None;
}

bool UUIBlueprintLibrary::IsHandled(const FEventReply& EventReply) {
    return false;
}

ATBLPlayerController* UUIBlueprintLibrary::GetOwningTBLPlayerController(UObject* Target) {
    return NULL;
}

UTBLLocalPlayer* UUIBlueprintLibrary::GetOwningTBLLocalPlayer(UObject* Target) {
    return NULL;
}

EUINavigation UUIBlueprintLibrary::GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent, bool& bInvalid) {
    return EUINavigation::Left;
}

EUINavigation UUIBlueprintLibrary::GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent, bool& bInvalid) {
    return EUINavigation::Left;
}

FText UUIBlueprintLibrary::GetKeyTextFromActionBindingName(const FString& ActionName, FInputActionKeyMapping& ActionMappingOut, bool bLongDisplayName, EGamepadInputMode InputMode, UObject* WorldContextObject) {
    return FText::GetEmpty();
}

FKey UUIBlueprintLibrary::GetKeyFromButtonCallout(FButtonCallout Callout, UWidget* WorldContextObject) {
    return FKey{};
}

FKey UUIBlueprintLibrary::GetKeyFromAxisBindingName(const FString& ActionName, UObject* WorldContextObject) {
    return FKey{};
}

FKey UUIBlueprintLibrary::GetKeyFromActionBindingName(const FString& ActionName, UObject* WorldContextObject) {
    return FKey{};
}

FKeyDisplayInfo UUIBlueprintLibrary::GetKeyDisplayInfoFromTable(FKey Key, UDataTable* Table) {
    return FKeyDisplayInfo{};
}

FKey UUIBlueprintLibrary::GetGamepadBackButton() {
    return FKey{};
}

FKey UUIBlueprintLibrary::GetGamepadAcceptButton() {
    return FKey{};
}

TArray<EFaction> UUIBlueprintLibrary::GetFactionOrder(EFaction A, EFaction B) {
    return TArray<EFaction>();
}

FText UUIBlueprintLibrary::GetFactionName(EFaction Faction) {
    return FText::GetEmpty();
}

FLinearColor UUIBlueprintLibrary::GetFactionColor(EFaction Faction, ETeamUIColorType ColorType) {
    return FLinearColor{};
}

TArray<FButtonCallout> UUIBlueprintLibrary::GetButtonCallouts(UWidget* Target) {
    return TArray<FButtonCallout>();
}

void UUIBlueprintLibrary::GetAllMapNames(TArray<FName>& OutAssetNames, const FString& MapPath) {
}

void UUIBlueprintLibrary::GetAllKeysFromActionBindingName(const FString& ActionName, TArray<FKey>& NonGamePad, TArray<FKey>& Gamepad, UObject* WorldContextObject) {
}

UTBLScreenManager* UUIBlueprintLibrary::GetActiveScreenManagerImpure(UObject* WorldContextObject) {
    return NULL;
}

UTBLScreenManager* UUIBlueprintLibrary::GetActiveScreenManager(UObject* WorldContextObject) {
    return NULL;
}

FInputActionKeyMapping UUIBlueprintLibrary::GetActionBindingFromName(FName ActionName, UObject* WorldContextObject) {
    return FInputActionKeyMapping{};
}

void UUIBlueprintLibrary::FocusOnBestWidgetOrChild(UWidget* Widget) {
}

FText UUIBlueprintLibrary::ConvertTimespanToText(FTimespan Timespan) {
    return FText::GetEmpty();
}

void UUIBlueprintLibrary::AttemptThrottledOnKilledUIActions(EFrameThrottleBranch& Branches) {
}

UHudMarkerDisplayComponent* UUIBlueprintLibrary::AddHudMarkerComponentToActor(AActor* Actor, EFaction VisibleToFaction, TSubclassOf<UHudMarkerDisplayComponent> Class, bool bReplicates) {
    return NULL;
}

UUIBlueprintLibrary::UUIBlueprintLibrary() {
}

