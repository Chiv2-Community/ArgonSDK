#include "TBLGameInstance.h"
#include "TBLLiveConfig.h"

void UTBLGameInstance::TryLeaveNativeSession() {
}

void UTBLGameInstance::TriggerNativeSessionSettingChange(const FString& Value) {
}

void UTBLGameInstance::TestUserLoginDowngraded() {
}

void UTBLGameInstance::TestNetworkDisconnect() {
}

void UTBLGameInstance::TestNativeInviteUI() {
}

void UTBLGameInstance::TestHandleLoginDowngraded() {
}

void UTBLGameInstance::TestControllerDialog() {
}

void UTBLGameInstance::ShowPlatformSpecificPlayerDetails(ATBLPlayerState* PlayerState) {
}

void UTBLGameInstance::ShowLoadingScreenDuringPostMatch() {
}

void UTBLGameInstance::ShowFreeWeekendUpsell(int32 LocalUserNum) {
}

void UTBLGameInstance::SetMatchmakingQueueSelected(const FName& QueueId, bool IsSelected) {
}

void UTBLGameInstance::SetFirstLoadCompleted(bool IsComplete) {
}

void UTBLGameInstance::ResetProfileData() {
}

void UTBLGameInstance::PushShowMouseCursorStackSuppressor(UObject* Object) {
}

void UTBLGameInstance::PushShowMouseCursorStack(UObject* Object) {
}

void UTBLGameInstance::PrintMorphTargetReport() {
}

void UTBLGameInstance::PopShowMouseCursorStackSuppressor(UObject* Object) {
}

void UTBLGameInstance::PopShowMouseCursorStack(UObject* Object) {
}

void UTBLGameInstance::PollTitleDataAndNews() {
}

void UTBLGameInstance::OpenNativeInviteUI() {
}

void UTBLGameInstance::OnYesLeaveMatch() {
}

void UTBLGameInstance::OnShowLoadingScreenPostMatch() {
}

void UTBLGameInstance::OnPostMatchEndTimeChanged(float Time) {
}

void UTBLGameInstance::OnPairingChangedYes() {
}

void UTBLGameInstance::OnPairingChangedNo() {
}

void UTBLGameInstance::OnNoLeaveMatch() {
}

void UTBLGameInstance::OnCustomizationApplied(const FCustomizationContext& Context) {
}

void UTBLGameInstance::OnConnectControllerDlgOK() {
}

void UTBLGameInstance::ListLoadedStaticMeshWithNegativeScale() {
}

void UTBLGameInstance::LeaveNativeSession() {
}

bool UTBLGameInstance::LastJoinFailed() {
    return false;
}

bool UTBLGameInstance::IsNativeSessionHost() {
    return false;
}

bool UTBLGameInstance::IsNativeSessionFull() {
    return false;
}

bool UTBLGameInstance::IsMatchmakingQueueSelected(const FName& QueueId) const {
    return false;
}

bool UTBLGameInstance::IsInMainMenuMap() const {
    return false;
}

bool UTBLGameInstance::IsFirstLoadCompleted() {
    return false;
}

bool UTBLGameInstance::IsCrossplayBlockedByOS() {
    return false;
}

void UTBLGameInstance::HandlePartyMembersUpdated() {
}

void UTBLGameInstance::GrantFlavorEntitlement(const FString& Entitlement) {
}

void UTBLGameInstance::GoToTutorialMap() {
}

bool UTBLGameInstance::GetShowMouseCursor() const {
    return false;
}

int32 UTBLGameInstance::GetNativeSessionMemberCount() {
    return 0;
}

EGamepadInputMode UTBLGameInstance::GetLastGamepadInputMode() const {
    return EGamepadInputMode::MouseKeyboard;
}

FName UTBLGameInstance::GetCurrentState() const {
    return NAME_None;
}

void UTBLGameInstance::Disconnect(UObject* WorldContextObject) {
}

void UTBLGameInstance::ClickedOnMessage() {
}

void UTBLGameInstance::ClickedLeavePartyYes() {
}

void UTBLGameInstance::ClickedLeavePartyNo() {
}

void UTBLGameInstance::ClickedExitGame() {
}

void UTBLGameInstance::ClickedCancelConnect() {
}

void UTBLGameInstance::ClearShowMouseCursorStackSuppressors(const bool bUpdateMouseCursorImmediately) {
}

bool UTBLGameInstance::CanUseMatchmaker() const {
    return false;
}

bool UTBLGameInstance::CanLeaveNativeSession() {
    return false;
}

UTBLGameInstance::UTBLGameInstance() {
    this->PlayingMusicEvent = NULL;
    this->PlayingMusicEvent_PlayingID = 0;
    this->ChatHistoryTrimThreshold = 200;
    this->ChatHistoryTrimToLength = 100;
    this->AbbreviatedChatHistoryTrimThreshold = 30;
    this->AbbreviatedChatHistoryTrimToLength = 15;
    this->AbbreviatedChatMaxMessages[0] = 0;
    this->AbbreviatedChatMaxMessages[1] = 0;
    this->AbbreviatedChatMaxMessages[2] = 0;
    this->AbbreviatedChatMaxMessages[3] = 0;
    this->AbbreviatedChatMaxMessages[4] = 0;
    this->AbbreviatedChatMaxMessages[5] = 0;
    this->AbbreviatedChatMaxMessages[6] = 0;
    this->AbbreviatedChatMaxMessages[7] = 0;
    this->AbbreviatedChatMaxMessages[8] = 0;
    this->AbbreviatedChatMaxMessages[9] = 0;
    this->AbbreviatedChatMaxMessages[10] = 0;
    this->AbbreviatedChatMaxMessages[11] = 0;
    this->AbbreviatedChatMaxMessages[12] = 0;
    this->AbbreviatedChatMaxMessages[13] = 0;
    this->AbbreviatedChatMaxMessages[14] = 0;
    this->ChatBlockedMessages[0] = 0;
    this->ChatBlockedMessages[1] = 0;
    this->ChatBlockedMessages[2] = 0;
    this->ChatBlockedMessages[3] = 0;
    this->ChatBlockedMessages[4] = 0;
    this->ChatBlockedMessages[5] = 0;
    this->ChatBlockedMessages[6] = 0;
    this->ChatBlockedMessages[7] = 0;
    this->ChatBlockedMessages[8] = 0;
    this->ChatBlockedMessages[9] = 0;
    this->ChatBlockedMessages[10] = 0;
    this->ChatBlockedMessages[11] = 0;
    this->ChatBlockedMessages[12] = 0;
    this->ChatBlockedMessages[13] = 0;
    this->ChatBlockedMessages[14] = 0;
    this->AbbreviatedChatBlockedMessages[0] = 0;
    this->AbbreviatedChatBlockedMessages[1] = 0;
    this->AbbreviatedChatBlockedMessages[2] = 0;
    this->AbbreviatedChatBlockedMessages[3] = 0;
    this->AbbreviatedChatBlockedMessages[4] = 0;
    this->AbbreviatedChatBlockedMessages[5] = 0;
    this->AbbreviatedChatBlockedMessages[6] = 0;
    this->AbbreviatedChatBlockedMessages[7] = 0;
    this->AbbreviatedChatBlockedMessages[8] = 0;
    this->AbbreviatedChatBlockedMessages[9] = 0;
    this->AbbreviatedChatBlockedMessages[10] = 0;
    this->AbbreviatedChatBlockedMessages[11] = 0;
    this->AbbreviatedChatBlockedMessages[12] = 0;
    this->AbbreviatedChatBlockedMessages[13] = 0;
    this->AbbreviatedChatBlockedMessages[14] = 0;
    this->AllowedClosedCaptionTypes[0] = 0;
    this->AllowedClosedCaptionTypes[1] = 0;
    this->AllowedClosedCaptionTypes[2] = 0;
    this->ClosedCaptionMaxDistanceSq = 4000000.00f;
    this->LightSabresLoaded = true;
    this->ShowBigNotificationOnCL = 0;
    this->SavedBigNotificationCL = 0;
    this->LiveConfig = CreateDefaultSubobject<UTBLLiveConfig>(TEXT("LiveConfig"));
    this->PerformanceCaptureTool = NULL;
    this->PerformanceCaptureToolClass = NULL;
    this->WelcomeScreenMap = TEXT("/Game/Maps/Frontend/Frontend");
    this->MainMenuMap = TEXT("/Game/Maps/Frontend/Frontend");
    this->TutorialMap = TEXT("/Game/Maps/Tutorial/Tutorial");
    this->bStartedLoadingAbilityConfig = false;
    this->bStartedLoadingCustomization = false;
    this->CurCustPresetIdx = -1;
    this->PreloadCharacter = NULL;
    this->bRegisteredWwiseCallback = false;
    this->ProfileSaveInstance = NULL;
    this->DialogManager = NULL;
    this->PendingActiveScreenManager = NULL;
    this->MessageBus = NULL;
    this->FirstLoadCompleted = true;
    this->bShowMouseCursor = false;
    this->LastGamepadInputMode = EGamepadInputMode::MouseKeyboard;
}

