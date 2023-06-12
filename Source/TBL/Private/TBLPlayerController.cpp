#include "TBLPlayerController.h"
#include "AkComponent.h"
#include "CineCameraComponent.h"
#include "GameplayTasksComponent.h"
#include "CampaignList.h"
#include "CinematicsComponent.h"
#include "CloudMutedPlayers.h"
#include "Net/UnrealNetwork.h"
#include "QuestPool.h"
#include "Templates/SubclassOf.h"

void ATBLPlayerController::VoteStarted(UVotingInstance* VotingInstance) {
}

void ATBLPlayerController::VOIPSetRemoteVolumeExec(float Volume) {
}

void ATBLPlayerController::VOIPMuteLocalExec(bool Mute) {
}

TArray<FString> ATBLPlayerController::VOIPGetTalkingNames() {
    return TArray<FString>();
}

TArray<FString> ATBLPlayerController::VOIPGetTalkingIds() {
    return TArray<FString>();
}

void ATBLPlayerController::VOIPGetTalkingExec() {
}

void ATBLPlayerController::VerifyCustomizationOnlineOwnership(bool bOnOnlineStatsLoaded) {
}

void ATBLPlayerController::UpdateVoiceStateForAllPlayers() {
}

void ATBLPlayerController::UpdateUncheckedItems() {
}

void ATBLPlayerController::UpdateSelfCamera() {
}

void ATBLPlayerController::UnPrepareAllVOEVents() {
}

void ATBLPlayerController::UnloadBank(const FString& BankName) {
}

void ATBLPlayerController::ToggleIgnoreAI() {
}

void ATBLPlayerController::ToggleHud() {
}

void ATBLPlayerController::ToggleGhostCameraMode() {
}

void ATBLPlayerController::ToggleGhost() {
}

void ATBLPlayerController::ToggleFriendlyMarkers() {
}

void ATBLPlayerController::ToggleCameraKeyReleased() {
}

void ATBLPlayerController::ToggleCameraKeyPressed() {
}

void ATBLPlayerController::ToggleCamera() {
}

void ATBLPlayerController::ToggleAutospawn(bool bEnabled, bool bLeaveCurrentWave) {
}

void ATBLPlayerController::TestBadTravel() {
}

void ATBLPlayerController::TeleportToMe() {
}

void ATBLPlayerController::TeamSay(FString& Msg) {
}

void ATBLPlayerController::TeamAppliedToPlayer(ATBLTeam* Team) {
}

void ATBLPlayerController::TBLClientSetControlRotation_Implementation(FRotator ClientRotation) {
}
bool ATBLPlayerController::TBLClientSetControlRotation_Validate(FRotator ClientRotation) {
    return true;
}

void ATBLPlayerController::SyntheticInput_Movement(bool bEnable) {
}

void ATBLPlayerController::SyntheticInput_AI(bool bEnable) {
}

void ATBLPlayerController::SyntheticInput_Actions(bool bEnable) {
}

void ATBLPlayerController::SwitchToSpectator() {
}

void ATBLPlayerController::SwitchToSelfCamera() {
}

void ATBLPlayerController::SwitchTeam(int32 RequestedTeamIndex) {
}

void ATBLPlayerController::SwitchClass(int32 RequestedClassIndex, int32 RequestedSubclassIndex) {
}

void ATBLPlayerController::Suicide() {
}

void ATBLPlayerController::StopSoundAllSounds(UAkAudioEvent* Sound) {
}

void ATBLPlayerController::StopCameraShake(FName CameraShakeName) {
}

void ATBLPlayerController::StopAnalytics() {
}

void ATBLPlayerController::StartTeamSayChat() {
}

void ATBLPlayerController::StartRangedWeaponWarning(float DrawStrength, AInventoryItem* DrawnWeapon, FName AttackName) {
}

void ATBLPlayerController::StartLastChannelChat() {
}

void ATBLPlayerController::StartAllSayChat() {
}

void ATBLPlayerController::SpawnWaveNoLongerJoinable(ASpawnWave* Wave) {
}

UMovementDebugger* ATBLPlayerController::SpawnMovementDebugger() {
    return NULL;
}

void ATBLPlayerController::ShuffleLoadout(bool bShouldShuffle) {
}

void ATBLPlayerController::ShowOtherParryBoxes() {
}

void ATBLPlayerController::ShowMyParryBox() {
}

void ATBLPlayerController::ShowMessageDialog(FText Message) {
}

void ATBLPlayerController::ShowIngameMenu() {
}

bool ATBLPlayerController::ShouldDrawVisibilityCheck() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawFacingCheck() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugWeaponTip() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugTracers() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugTracerDirection() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugTracerCache() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugShield() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugRangedInaccuracy() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugProjectile() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugParryHit() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugMeleeHit() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawDebugHorseImpact() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawClientDebugTracers() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawCamera() const {
    return false;
}

bool ATBLPlayerController::ShouldDrawBackSwingCheck() const {
    return false;
}

bool ATBLPlayerController::ShouldDisplaySwingThroughInfo() const {
    return false;
}

bool ATBLPlayerController::ShouldDisplayNDA() {
    return false;
}

bool ATBLPlayerController::ShouldClearDebugTracers() const {
    return false;
}

void ATBLPlayerController::SetupCameraTargetOnDeath(APawn* P, FName AttachSocketName) {
}

void ATBLPlayerController::SetStatOriginal(const FString& StatType, int32 StatValue) {
}

void ATBLPlayerController::SetStatFloat(const FString& StatName, float StatValue) {
}

void ATBLPlayerController::SetStat(const FString& StatName, int32 StatValue) {
}

void ATBLPlayerController::SetSpectatorCamera() {
}

void ATBLPlayerController::SetShowPlayerListOnStartupInOverview(bool bShow) {
}

void ATBLPlayerController::SetRegionPingExec(const FString& Region, int32 Ping) {
}

void ATBLPlayerController::SetRandomLoadout(FLoadout& Loadout) {
}

void ATBLPlayerController::SetPlayingPrologue(bool bInPlayingPrologue) {
}

void ATBLPlayerController::SetPlayerHasPlayedTutorial() {
}

void ATBLPlayerController::SetPlayerHasAcceptedPurchaseDisclaimer() {
}

void ATBLPlayerController::SetPlayerHasAcceptedNDA() {
}

void ATBLPlayerController::SetNewCustomizationForPawn(const TArray<FSwatchSelection>& Swatches, APawn* Char, EFaction Faction) {
}

void ATBLPlayerController::SetNewCustomizationForCurrentPawn(const TArray<FSwatchSelection>& Swatches) {
}

void ATBLPlayerController::SetMinimumSpawnDelayOverride(float InMinimumSpawnDelayOverride) {
}

void ATBLPlayerController::SetLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout) {
}

void ATBLPlayerController::SetListenerEnabled(bool Enabled) {
}

void ATBLPlayerController::SetLastReadDeveloperMessageTime(FDateTime ReadDeveloperMessageTime) {
}

void ATBLPlayerController::SetHudVisibility(bool bVisible) {
}

void ATBLPlayerController::SetCameraShakeProperty(FName CameraShakeName, FName PropertyName, const FString& Value) {
}

void ATBLPlayerController::SetCameraRotation(float Pitch, float Yaw, float Roll) {
}

void ATBLPlayerController::SetCameraProperty(FName PropertyName, const FString& Value) {
}

void ATBLPlayerController::SetCameraOffset(float X, float Y, float Z) {
}

void ATBLPlayerController::SetAutoSprint(bool bEnable) {
}

void ATBLPlayerController::SetAltAttackWithMovement(bool bEnable) {
}

void ATBLPlayerController::SetAllRegionPingExec(int32 Ping) {
}

void ATBLPlayerController::SetAimedAtSoundEnabled(bool Enable) {
}

void ATBLPlayerController::SetAimedAtMaxDistance(float Distance) {
}

void ATBLPlayerController::ServerUpdateAimedAtCharacters_Implementation(const TArray<TWeakObjectPtr<ATBLCharacter>>& Characters) {
}
bool ATBLPlayerController::ServerUpdateAimedAtCharacters_Validate(const TArray<TWeakObjectPtr<ATBLCharacter>>& Characters) {
    return true;
}

void ATBLPlayerController::ServerToggleAutospawn_Implementation(bool bEnabled, bool bLeaveCurrentWave) {
}
bool ATBLPlayerController::ServerToggleAutospawn_Validate(bool bEnabled, bool bLeaveCurrentWave) {
    return true;
}

void ATBLPlayerController::ServerTeleportPawnsToMe_Implementation(ATBLCharacter* pTargetCharacter) {
}
bool ATBLPlayerController::ServerTeleportPawnsToMe_Validate(ATBLCharacter* pTargetCharacter) {
    return true;
}

void ATBLPlayerController::ServerTBSActivateDevMode_Implementation(bool bActivate) {
}
bool ATBLPlayerController::ServerTBSActivateDevMode_Validate(bool bActivate) {
    return true;
}

void ATBLPlayerController::ServerSwitchToSpectator_Implementation() {
}
bool ATBLPlayerController::ServerSwitchToSpectator_Validate() {
    return true;
}

void ATBLPlayerController::ServerSuicide_Implementation() {
}
bool ATBLPlayerController::ServerSuicide_Validate() {
    return true;
}

void ATBLPlayerController::ServerSubmitVote_Implementation(UVotingInstance* VotingInstance, FName Vote) {
}
bool ATBLPlayerController::ServerSubmitVote_Validate(UVotingInstance* VotingInstance, FName Vote) {
    return true;
}

void ATBLPlayerController::ServerSubmitPlayerPostGameFeedback_Implementation(int32 StarRating) {
}
bool ATBLPlayerController::ServerSubmitPlayerPostGameFeedback_Validate(int32 StarRating) {
    return true;
}

void ATBLPlayerController::ServerStopAnalytics_Implementation() {
}
bool ATBLPlayerController::ServerStopAnalytics_Validate() {
    return true;
}

void ATBLPlayerController::ServerSpawnGoreHead_Implementation(ATBLPlayerState* InPlayerState, uint8 DeadCharacterId, const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation, const FVector_NetQuantize& Impulse) {
}
bool ATBLPlayerController::ServerSpawnGoreHead_Validate(ATBLPlayerState* InPlayerState, uint8 DeadCharacterId, const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation, const FVector_NetQuantize& Impulse) {
    return true;
}

void ATBLPlayerController::ServerShowDebugCapture_Implementation(bool bActive, FName Category) {
}
bool ATBLPlayerController::ServerShowDebugCapture_Validate(bool bActive, FName Category) {
    return true;
}

void ATBLPlayerController::ServerSetSyntheticInputMovement_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerSetSyntheticInputMovement_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerSetSyntheticInputAI_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerSetSyntheticInputAI_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerSetSyntheticInputActions_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerSetSyntheticInputActions_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerSetSpectatorCamera_Implementation() {
}
bool ATBLPlayerController::ServerSetSpectatorCamera_Validate() {
    return true;
}

void ATBLPlayerController::ServerSetPS5MatchId_Implementation(const FString& NewPS5MatchId) {
}

void ATBLPlayerController::ServerSetPlayerCustomization_Implementation(const TArray<FCustomizationMap>& PlayerCustomization, ATBLPlayerState* PS) {
}
bool ATBLPlayerController::ServerSetPlayerCustomization_Validate(const TArray<FCustomizationMap>& PlayerCustomization, ATBLPlayerState* PS) {
    return true;
}

void ATBLPlayerController::ServerSetPlatformOSSUniqueId_Implementation(const FUniqueNetIdRepl& UniqueIdRepl) {
}

void ATBLPlayerController::ServerSetPartyId_Implementation(const FString& PartyId) {
}
bool ATBLPlayerController::ServerSetPartyId_Validate(const FString& PartyId) {
    return true;
}

void ATBLPlayerController::ServerSetLoadout_Implementation(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout) {
}
bool ATBLPlayerController::ServerSetLoadout_Validate(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout) {
    return true;
}

void ATBLPlayerController::ServerSetInitialLoadouts_Implementation(const TArray<FSavedLoadout>& Loadouts) {
}
bool ATBLPlayerController::ServerSetInitialLoadouts_Validate(const TArray<FSavedLoadout>& Loadouts) {
    return true;
}

void ATBLPlayerController::ServerSetHardwarePlatform_Implementation(EHardwarePlatform Platform) {
}
bool ATBLPlayerController::ServerSetHardwarePlatform_Validate(EHardwarePlatform Platform) {
    return true;
}

void ATBLPlayerController::ServerSetForFFAPlayer_Implementation() {
}
bool ATBLPlayerController::ServerSetForFFAPlayer_Validate() {
    return true;
}

void ATBLPlayerController::ServerSetAimAssistTarget_Implementation(AActor* NewAimAssistTarget, int32 NewAimAssistTargetBoneIndex) {
}
bool ATBLPlayerController::ServerSetAimAssistTarget_Validate(AActor* NewAimAssistTarget, int32 NewAimAssistTargetBoneIndex) {
    return true;
}

void ATBLPlayerController::ServerSetAimAssistCorrectionParams_Implementation(int32 NewAimAssistCorrectionMaxPredictionOffset, int32 NewAimAssistCorrectionMaxAngle, int32 NewAimAssistCorrectionMaxOffset) {
}
bool ATBLPlayerController::ServerSetAimAssistCorrectionParams_Validate(int32 NewAimAssistCorrectionMaxPredictionOffset, int32 NewAimAssistCorrectionMaxAngle, int32 NewAimAssistCorrectionMaxOffset) {
    return true;
}

void ATBLPlayerController::ServerSendPostMatchInfo_Implementation(FClientPostMatchInfo PostMatchInfo, const TArray<FPerMinuteBucket>& PerMinuteBuckets) {
}
bool ATBLPlayerController::ServerSendPostMatchInfo_Validate(FClientPostMatchInfo PostMatchInfo, const TArray<FPerMinuteBucket>& PerMinuteBuckets) {
    return true;
}

void ATBLPlayerController::ServerSendOfflineAnalyticsEvent_Implementation(FOfflineAnalyticsEvent LocalAnalyticsEvent) {
}
bool ATBLPlayerController::ServerSendOfflineAnalyticsEvent_Validate(FOfflineAnalyticsEvent LocalAnalyticsEvent) {
    return true;
}

void ATBLPlayerController::ServerSendMatchProfile_Implementation(const FString& Nickname, const FString& MachineId, const FString& MachineName, const FString& OperatingSystemId, const FString& CommandLine, FTBLQualityLevels ScalabilitySettings) {
}
bool ATBLPlayerController::ServerSendMatchProfile_Validate(const FString& Nickname, const FString& MachineId, const FString& MachineName, const FString& OperatingSystemId, const FString& CommandLine, FTBLQualityLevels ScalabilitySettings) {
    return true;
}

void ATBLPlayerController::ServerSendEquippedPersonality_Implementation(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType) {
}
bool ATBLPlayerController::ServerSendEquippedPersonality_Validate(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType) {
    return true;
}

void ATBLPlayerController::ServerSay(FString& Msg) {
}

void ATBLPlayerController::ServerResetPartyId_Implementation() {
}
bool ATBLPlayerController::ServerResetPartyId_Validate() {
    return true;
}

void ATBLPlayerController::ServerResetIdleTime_Implementation() {
}
bool ATBLPlayerController::ServerResetIdleTime_Validate() {
    return true;
}

void ATBLPlayerController::ServerRequestNextSpawnTeam_Implementation(EFaction RequestedFaction, bool bImmediatelySwitch) {
}
bool ATBLPlayerController::ServerRequestNextSpawnTeam_Validate(EFaction RequestedFaction, bool bImmediatelySwitch) {
    return true;
}

void ATBLPlayerController::ServerRequestExit_Implementation() {
}
bool ATBLPlayerController::ServerRequestExit_Validate() {
    return true;
}

void ATBLPlayerController::ServerRequestAnalyticsStop_Implementation() {
}
bool ATBLPlayerController::ServerRequestAnalyticsStop_Validate() {
    return true;
}

void ATBLPlayerController::ServerRequestAnalyticsStart_Implementation(const FString& DataName) {
}
bool ATBLPlayerController::ServerRequestAnalyticsStart_Validate(const FString& DataName) {
    return true;
}

void ATBLPlayerController::ServerReportPlayer_Implementation(APlayerState* ReportedPlayer, const EPlayerReportCategory ReportCategory, const FString& ReportDescription) {
}
bool ATBLPlayerController::ServerReportPlayer_Validate(APlayerState* ReportedPlayer, const EPlayerReportCategory ReportCategory, const FString& ReportDescription) {
    return true;
}

void ATBLPlayerController::ServerReliableSetPlayingPrologue_Implementation(bool bInPlayingPrologue) {
}
bool ATBLPlayerController::ServerReliableSetPlayingPrologue_Validate(bool bInPlayingPrologue) {
    return true;
}

void ATBLPlayerController::ServerRejectSpawnWave_Implementation(ASpawnWave* Wave) {
}
bool ATBLPlayerController::ServerRejectSpawnWave_Validate(ASpawnWave* Wave) {
    return true;
}

void ATBLPlayerController::ServerRegisterAsHeadlessClient_Implementation() {
}
bool ATBLPlayerController::ServerRegisterAsHeadlessClient_Validate() {
    return true;
}

void ATBLPlayerController::ServerPropertyDebugger_Implementation() {
}
bool ATBLPlayerController::ServerPropertyDebugger_Validate() {
    return true;
}

void ATBLPlayerController::ServerPromptPlayerMessageReply_Implementation(int32 MessageId, bool Response) {
}
bool ATBLPlayerController::ServerPromptPlayerMessageReply_Validate(int32 MessageId, bool Response) {
    return true;
}

void ATBLPlayerController::ServerPrintAllDefaultCustomizationItems() {
}

void ATBLPlayerController::ServerOverrideSwatchIndex_Implementation(EInventorySlot Slot, int32 SwatchOverrideIndex) {
}
bool ATBLPlayerController::ServerOverrideSwatchIndex_Validate(EInventorySlot Slot, int32 SwatchOverrideIndex) {
    return true;
}

void ATBLPlayerController::ServerOnLoadoutScreenState_Implementation(bool DidOpen) {
}
bool ATBLPlayerController::ServerOnLoadoutScreenState_Validate(bool DidOpen) {
    return true;
}

void ATBLPlayerController::ServerNotifyDoneTravelling_Implementation() {
}
bool ATBLPlayerController::ServerNotifyDoneTravelling_Validate() {
    return true;
}

void ATBLPlayerController::ServerMovementDebuggerLoadFile_Implementation(FName Filename) {
}
bool ATBLPlayerController::ServerMovementDebuggerLoadFile_Validate(FName Filename) {
    return true;
}

void ATBLPlayerController::ServerMovementDebugger_Implementation() {
}
bool ATBLPlayerController::ServerMovementDebugger_Validate() {
    return true;
}

void ATBLPlayerController::ServerLeaveSpawnWave_Implementation(ASpawnWave* Wave) {
}
bool ATBLPlayerController::ServerLeaveSpawnWave_Validate(ASpawnWave* Wave) {
    return true;
}

void ATBLPlayerController::ServerJoinSpawnWave_Implementation(ASpawnWave* Wave, bool bFromAutoSpawn) {
}
bool ATBLPlayerController::ServerJoinSpawnWave_Validate(ASpawnWave* Wave, bool bFromAutoSpawn) {
    return true;
}

void ATBLPlayerController::ServerForgivePlayer_Implementation() {
}
bool ATBLPlayerController::ServerForgivePlayer_Validate() {
    return true;
}

void ATBLPlayerController::ServerForceSelfAutobalance_Implementation() {
}
bool ATBLPlayerController::ServerForceSelfAutobalance_Validate() {
    return true;
}

void ATBLPlayerController::ServerForceImmediateSpawn_Implementation() {
}
bool ATBLPlayerController::ServerForceImmediateSpawn_Validate() {
    return true;
}

void ATBLPlayerController::ServerDrawWeaponTip_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawWeaponTip_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawVisibilityCheck_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawVisibilityCheck_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawTracers_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawTracers_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawTracerDirection_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawTracerDirection_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawSpectatorCamera_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawSpectatorCamera_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawShield_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawShield_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawProjectile_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawProjectile_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawParryHit_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawParryHit_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawHorseImpact_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawHorseImpact_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawFacingCheck_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawFacingCheck_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawBackSwingCheck_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawBackSwingCheck_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDrawAllTracers_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDrawAllTracers_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerDisplaySwingThroughInfo_Implementation(bool bEnable) {
}
bool ATBLPlayerController::ServerDisplaySwingThroughInfo_Validate(bool bEnable) {
    return true;
}

void ATBLPlayerController::ServerCommendPlayer_Implementation() {
}
bool ATBLPlayerController::ServerCommendPlayer_Validate() {
    return true;
}

void ATBLPlayerController::ServerClosePropertyDebugger_Implementation() {
}
bool ATBLPlayerController::ServerClosePropertyDebugger_Validate() {
    return true;
}

void ATBLPlayerController::ServerCloseMovementDebugger_Implementation() {
}
bool ATBLPlayerController::ServerCloseMovementDebugger_Validate() {
    return true;
}

void ATBLPlayerController::ServerClearPS5MatchId_Implementation() {
}

void ATBLPlayerController::ServerCheatObj_Implementation(FName CheatCommand, UObject* Param) {
}
bool ATBLPlayerController::ServerCheatObj_Validate(FName CheatCommand, UObject* Param) {
    return true;
}

void ATBLPlayerController::ServerCheat_Implementation(FName CheatCommand, FName Param) {
}
bool ATBLPlayerController::ServerCheat_Validate(FName CheatCommand, FName Param) {
    return true;
}

void ATBLPlayerController::ServerBroadcastDebugMessage_Implementation(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly) {
}
bool ATBLPlayerController::ServerBroadcastDebugMessage_Validate(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly) {
    return true;
}

void ATBLPlayerController::ServerBroadcast_Implementation(const FString& Msg, TEnumAsByte<EChatType::Type> ChatType, FColor OverrideColor) {
}
bool ATBLPlayerController::ServerBroadcast_Validate(const FString& Msg, TEnumAsByte<EChatType::Type> ChatType, FColor OverrideColor) {
    return true;
}

void ATBLPlayerController::ServerBPCheat_Implementation(const FString& CheatAndParams) {
}
bool ATBLPlayerController::ServerBPCheat_Validate(const FString& CheatAndParams) {
    return true;
}

void ATBLPlayerController::ServerAdminCmd_Implementation(const FString& Cmd) {
}
bool ATBLPlayerController::ServerAdminCmd_Validate(const FString& Cmd) {
    return true;
}

void ATBLPlayerController::SendPromptPlayerMessageRequest(FGameplayTag MessageTag, int32& SentMessageId) {
}

void ATBLPlayerController::SendPromptPlayerMessageReply(int32 MessageId, bool Response) {
}

void ATBLPlayerController::SendCancelPlayerMessageRequest(int32 MessageId) {
}

void ATBLPlayerController::SelfSyntheticInput(bool bEnable) {
}

void ATBLPlayerController::SayChatType(const FString& Msg, TEnumAsByte<EChatType::Type> ChatType, FColor OverrideColor) {
}

void ATBLPlayerController::Say(FString& Msg) {
}

void ATBLPlayerController::SaveLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, TSubclassOf<ULoadoutSelection> LoadoutSelection, FLoadout RequestedLoadout) {
}

void ATBLPlayerController::SaveCloudFilesIfDirty() {
}

void ATBLPlayerController::SaveAutoInputRecord() {
}

void ATBLPlayerController::ResetSelfCamera() {
}

void ATBLPlayerController::ResetNativeAchievements() {
}

void ATBLPlayerController::RequestSwitchTeam(EFaction RequestedFaction) {
}

void ATBLPlayerController::RequestRejectSpawnWave(ASpawnWave* Wave) {
}

void ATBLPlayerController::RequestLeaveSpawnWave(ASpawnWave* Wave) {
}

void ATBLPlayerController::RequestJoinSpawnWave(ASpawnWave* Wave, bool bFromAutoSpawn) {
}

void ATBLPlayerController::ReportPlayer(APlayerState* ReportedPlayer, const EPlayerReportCategory ReportCategory, const FString& ReportDescription) {
}

void ATBLPlayerController::RemoveViewedItem(const FPrimaryAssetId& ItemId) {
}

void ATBLPlayerController::RemoveLoadingScreenPanel() {
}

void ATBLPlayerController::RemoveFriendById(const FString& UniqueId) {
}

void ATBLPlayerController::RemoveCurrencyExec(const FString& Currency, int32 Amount) {
}

void ATBLPlayerController::RemoveAllViewedItems() {
}

void ATBLPlayerController::ReleasedMenuButton() {
}

void ATBLPlayerController::RefreshRegionPingExec() {
}

void ATBLPlayerController::ReadFriendList() {
}

void ATBLPlayerController::PurchaseOffer(const FStoreOfferItem& Offer) {
}

void ATBLPlayerController::PurchaseItemExec(const FString& ItemId, const FString& Currency) {
}

void ATBLPlayerController::PurchaseItemByString(const FString& ItemId, const FString& Currency) {
}

void ATBLPlayerController::PurchaseItem(const FPrimaryAssetId& ItemId, const FString& Currency) {
}

void ATBLPlayerController::PS4TouchpadPressed() {
}

void ATBLPlayerController::PropertyDebuggerAdd(const FString& PropertyName) {
}

void ATBLPlayerController::PropertyDebugger() {
}

void ATBLPlayerController::PrintWeaponActionEvents() {
}

void ATBLPlayerController::PrintDebugMessage(const FString& Message, FColor TextColor, float Duration) {
}

void ATBLPlayerController::PrintCameraShakeProperties(FName CameraShakeName) {
}

void ATBLPlayerController::PrintCameraProperties() {
}

void ATBLPlayerController::PressedMenuButton() {
}

void ATBLPlayerController::PrepareEvent(const FString& EventName) {
}

void ATBLPlayerController::PrepareBank(const FString& BankName) {
}

void ATBLPlayerController::PlaySound(UAkAudioEvent* Sound) {
}

int32 ATBLPlayerController::PlayGlobalVOEmote(UCTBase* CTPersonality, FName EmoteName, EFaction Faction, TEnumAsByte<EAudioClassType::Type> Class, EVOType VoType) {
    return 0;
}

bool ATBLPlayerController::PlayerViewUnlockedLoadoutItem(const TSubclassOf<ATBLCharacter>& CharacterSubclass, const TSubclassOf<AInventoryItem>& Item) {
    return false;
}

bool ATBLPlayerController::PlayerViewedUnlockedSubclass(const TSubclassOf<ATBLCharacter>& CharacterSubclass) {
    return false;
}

void ATBLPlayerController::PlayerSubmitVote(UVotingInstance* VotingInstance, FName Vote) {
}

void ATBLPlayerController::PlayerStateUniqueIdReplicated(ATBLPlayerState* PS) {
}

void ATBLPlayerController::PlayerStateMissingOnClientStart(APlayerState* NewPlayerState) {
}

void ATBLPlayerController::PlayerPostGameFeedback(int32 StarRating) {
}

void ATBLPlayerController::PlayerKilled(FDeathEvent DeathEvent) {
}

void ATBLPlayerController::PlayerIsBeingKicked() {
}

void ATBLPlayerController::PlayerCallKickVote(APlayerState* KickTarget) {
}

void ATBLPlayerController::PlayDelayedCrossbowHapticsForPS5() {
}

void ATBLPlayerController::PlayCameraShake(FName CameraShakeName, bool bLoop) {
}

void ATBLPlayerController::PendingSpawnExpired(ASpawner* PendingSpawner) {
}

void ATBLPlayerController::PartySay(FString& Msg) {
}

void ATBLPlayerController::OwningTeamChanged(ATBLTeam* NewOwningTeam) {
}

void ATBLPlayerController::OpenBlueprintDebugMenu() {
}

void ATBLPlayerController::OnRep_NextSpawnWave(ASpawnWave* PreviousSpawnWave) {
}

void ATBLPlayerController::OnRep_CheatsEnabled() {
}

void ATBLPlayerController::OnRep_bAutomaticallyChooseSpawnWave() {
}

void ATBLPlayerController::OnReceivedFocus() {
}

void ATBLPlayerController::OnReadUserFileComplete(const FPlatformInterfaceDelegateResult& Result) {
}

void ATBLPlayerController::OnPostGameMatchFound(FName MatchmadeSessionName, bool bSuccess) {
}

void ATBLPlayerController::OnPostGameMatchCancelled(FName MatchmadeSessionName, bool bSuccess) {
}

void ATBLPlayerController::OnMatchMakingChanged(bool bIsMatchmaking) {
}

void ATBLPlayerController::OnLostFocus() {
}

void ATBLPlayerController::OnLoadoutScreenState(bool DidOpen) {
}

void ATBLPlayerController::OnlineStatsReplicated(FTBLOnlineStats OnlineStats) {
}

void ATBLPlayerController::OnInputExitDeathCam() {
}

void ATBLPlayerController::OnEnumerateCloudFilesComplete(const FPlatformInterfaceDelegateResult& Result) {
}

void ATBLPlayerController::OnAbilityInitiated(AAbilityInvocation* Invocation) {
}

void ATBLPlayerController::NotifyEnteredLeftLoadoutVolume(UObject* LoadoutVolume, bool bInLoadoutVolume) {
}

void ATBLPlayerController::NotifyCausedDamage(const FDamageTakenEvent& Event) {
}

void ATBLPlayerController::MuteClient(bool Enabled) {
}

void ATBLPlayerController::MovementDebuggerLoadFile(FName Filename) {
}

void ATBLPlayerController::MovementDebugger() {
}

void ATBLPlayerController::LoadVOASync(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType) {
}

void ATBLPlayerController::LoadBank(const FString& BankName) {
}

void ATBLPlayerController::ListViewedItems() const {
}

void ATBLPlayerController::ListPlayers() {
}

bool ATBLPlayerController::IsVOBankLoaded(TEnumAsByte<EAudioPersonalityType::Type> PersonalityType) {
    return false;
}

bool ATBLPlayerController::IsViewportFocused() {
    return false;
}

bool ATBLPlayerController::IsViewedItem(const FPrimaryAssetId& ItemId) {
    return false;
}

bool ATBLPlayerController::IsUsingGamepad() {
    return false;
}

bool ATBLPlayerController::IsStatsLoaded() {
    return false;
}

bool ATBLPlayerController::IsSelfCamera() const {
    return false;
}

bool ATBLPlayerController::IsPlayingCinematics() {
    return false;
}

void ATBLPlayerController::IsPlayerStateMuted(ATBLPlayerState* InPlayerState, bool& OutIsMuted) {
}

bool ATBLPlayerController::IsPlayerChatMuted(APlayerState* MutedPlayer) {
    return false;
}

FPrimaryAssetId ATBLPlayerController::IsLoadoutItemRecentlyUnlocked(const TSubclassOf<ATBLCharacter>& CharacterSubclass, const TSubclassOf<AInventoryItem>& Item) {
    return FPrimaryAssetId{};
}

bool ATBLPlayerController::IsLoadoutEqualToSavedLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout Loadout) {
    return false;
}

bool ATBLPlayerController::IsHeadlessClient() {
    return false;
}

bool ATBLPlayerController::IsGhostCameraMode() const {
    return false;
}

FPrimaryAssetId ATBLPlayerController::IsCharacterRecentlyUnlocked(const TSubclassOf<ATBLCharacter>& CharacterSubclass) {
    return FPrimaryAssetId{};
}

bool ATBLPlayerController::IsActionKeyDown(FName ActionName) {
    return false;
}

void ATBLPlayerController::InputStop() {
}

void ATBLPlayerController::InputRec(FName ReplayName) {
}

void ATBLPlayerController::InputPlay(FName ReplayName) {
}

void ATBLPlayerController::InpStop() {
}

void ATBLPlayerController::InpRec(const FString& RecName) {
}

void ATBLPlayerController::InpPlay(const FString& RecName) {
}

void ATBLPlayerController::GrantFlavorEntitlementExec(const FString& Entitlement) {
}

void ATBLPlayerController::GrantCurrencyExec(const FString& Currency, int32 Amount) {
}

void ATBLPlayerController::GiveWeapon(FName WeaponName) {
}

TMap<FPrimaryAssetId, bool> ATBLPlayerController::GetUnlocksAtLevel(int32 Level, EOnlineStat Stat) {
    return TMap<FPrimaryAssetId, bool>();
}

TArray<FPrimaryAssetId> ATBLPlayerController::GetUnlockedItemsBySubclass(const TSubclassOf<ATBLCharacter>& CharacterSubclass) {
    return TArray<FPrimaryAssetId>();
}

int32 ATBLPlayerController::GetTotalTimesKilled() {
    return 0;
}

float ATBLPlayerController::GetToggleCameraGamepadInputHoldTimeThreshold() const {
    return 0.0f;
}

float ATBLPlayerController::GetTimeUntilRespawn() {
    return 0.0f;
}

void ATBLPlayerController::GetTimesKilledKilledByPlayer(ATBLPlayerState* OtherPlayer, int32& OutTimesKilled, int32& OutTimesKilledBy) {
}

float ATBLPlayerController::GetTeamDamage() {
    return 0.0f;
}

UTBLPlayerInput* ATBLPlayerController::GetTBLPlayerInput() {
    return NULL;
}

float ATBLPlayerController::GetStatFloatExec(const FString& StatName) {
    return 0.0f;
}

float ATBLPlayerController::GetStatFloat(const FString& StatName) {
    return 0.0f;
}

int32 ATBLPlayerController::GetStatExec(const FString& StatName) {
    return 0;
}

int32 ATBLPlayerController::GetStat(EOnlineStat Stat) {
    return 0;
}

FTransform ATBLPlayerController::GetSpectatorPawnSpawnTransform_Implementation() {
    return FTransform{};
}

void ATBLPlayerController::GetSavedLoadout(TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout& Loadout) {
}

TSubclassOf<ATBLCharacter> ATBLPlayerController::GetSavedCharacterSubclass(TSubclassOf<ATBLCharacter> ParentClass) {
    return NULL;
}

bool ATBLPlayerController::GetRespawnTime(float& TimeRemaining) {
    return false;
}

TSubclassOf<AInventoryItem> ATBLPlayerController::GetRandomUnlockedLoadoutItemForSlot(ULoadoutSelection* LoadoutSelection, EInventoryItemSlot Slot) {
    return NULL;
}

UTBLQuestsCachedData* ATBLPlayerController::GetQuestsCachedData() {
    return NULL;
}

UQuestPool* ATBLPlayerController::GetQuestPool() {
    return NULL;
}

FOwnershipResponse ATBLPlayerController::GetOwnership(const FPrimaryAssetId& AssetIdToCheck, bool BaseOnly) {
    return FOwnershipResponse{};
}

TArray<FCustomizationEntry> ATBLPlayerController::GetOwnerCustomizationWeaponItems(EWeaponTag WeaponTag, EFaction Faction) {
    return TArray<FCustomizationEntry>();
}

TArray<FCustomizationEntry> ATBLPlayerController::GetOwnerCustomizationItems(TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction Faction, FName AssetsTypeName, bool bPresetCompatible, bool bSort) {
    return TArray<FCustomizationEntry>();
}

int32 ATBLPlayerController::GetOnlineCommodity(const FString& Key) {
    return 0;
}

ASpawnWave* ATBLPlayerController::GetNextSpawnWave() {
    return NULL;
}

int32 ATBLPlayerController::GetLevelExec(const FString& Stat) {
    return 0;
}

int32 ATBLPlayerController::GetLevel(EOnlineStat Stat) {
    return 0;
}

bool ATBLPlayerController::GetIsProfileDataLoaded() {
    return false;
}

void ATBLPlayerController::GetInputAnalogStickStateRaw(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const {
}

FPrimaryAssetId ATBLPlayerController::GetEquippedCustomizationWeaponAsset(EWeaponTag WeaponTag, EFaction Faction, TEnumAsByte<EAudioClassType::Type> CharacterType) {
    return FPrimaryAssetId{};
}

TArray<FOnlineStoreOffer> ATBLPlayerController::GetCatalogInLevelRange(bool LevelAccessible, int32 MinLevel, int32 MaxLevel, EOnlineStat Stat) {
    return TArray<FOnlineStoreOffer>();
}

void ATBLPlayerController::GetCatalogExec(bool LevelAccessible, int32 LevelsAbove) {
}

TArray<FOnlineStoreOffer> ATBLPlayerController::GetCatalog(bool LevelAccessible, int32 LevelsAbove, EOnlineStat Stat) {
    return TArray<FOnlineStoreOffer>();
}

UTBLCampaignsCachedData* ATBLPlayerController::GetCampaignsCachedData() {
    return NULL;
}

UCampaignList* ATBLPlayerController::GetCampaignList() const {
    return NULL;
}

UAkComponent* ATBLPlayerController::GetAudioComponent() {
    return NULL;
}

TSubclassOf<ULoadoutSelection> ATBLPlayerController::GetAllowedLoadoutSelection(TSubclassOf<ATBLCharacter> RequestedSubclass) {
    return NULL;
}

TArray<TSubclassOf<ATBLCharacter>> ATBLPlayerController::GetAllowedCharacterClasses() {
    return TArray<TSubclassOf<ATBLCharacter>>();
}

UTBLScreenManager* ATBLPlayerController::GetActiveScreenManager() {
    return NULL;
}

void ATBLPlayerController::GenerateStoreJSON() {
}

void ATBLPlayerController::ForceSelfAutobalance() {
}

void ATBLPlayerController::ForceImmediateRespawn() {
}

void ATBLPlayerController::EchoPlayFabId() {
}

void ATBLPlayerController::DumpStatsExec(int32 Threshold) {
}

void ATBLPlayerController::DumpPartyInfo() {
}

void ATBLPlayerController::DumpOwnership() {
}

void ATBLPlayerController::DumpMovementMetrics() {
}

void ATBLPlayerController::DumpFriendList() {
}

void ATBLPlayerController::DrawWeaponTip(bool bEnable) {
}

void ATBLPlayerController::DrawVisibilityCheck(bool bEnable) {
}

void ATBLPlayerController::DrawTracersClear(bool bEnable) {
}

void ATBLPlayerController::DrawTracers(bool bEnable) {
}

void ATBLPlayerController::DrawTracerDirection(bool bEnable) {
}

void ATBLPlayerController::DrawTracerCache(bool bEnable) {
}

void ATBLPlayerController::DrawSpectatorCamera(bool bEnable) {
}

void ATBLPlayerController::DrawSocket(FName SocketName) {
}

void ATBLPlayerController::DrawShield(bool bEnable) {
}

void ATBLPlayerController::DrawRangedInaccuracy(bool bEnable) {
}

void ATBLPlayerController::DrawProjectile(bool bEnable) {
}

void ATBLPlayerController::DrawParryHit(bool bEnable) {
}

void ATBLPlayerController::DrawMeleeHit(bool bEnable) {
}

void ATBLPlayerController::DrawHorseImpact(bool bEnable) {
}

void ATBLPlayerController::DrawFacingCheck(bool bEnable) {
}

void ATBLPlayerController::DrawClientTracers(bool bEnable) {
}

void ATBLPlayerController::DrawCamera(bool bEnable) {
}

void ATBLPlayerController::DrawBackSwingCheck(bool bEnable) {
}

void ATBLPlayerController::DrawAllTracers(bool bEnable) {
}

void ATBLPlayerController::DisplaySwingThroughInfo(bool bEnable) {
}

void ATBLPlayerController::DisplayDebugScrollUp() {
}

void ATBLPlayerController::DisplayDebugScrollReleased() {
}

void ATBLPlayerController::DisplayDebugScrollDown() {
}

void ATBLPlayerController::DisableCameraOffset() {
}

void ATBLPlayerController::DevMode(bool bActivate) {
}

void ATBLPlayerController::DestroyInputReplayComponent() {
}

void ATBLPlayerController::DebugSetPartySetting(const FString& Key, const FString& Value) {
}

void ATBLPlayerController::CreateInputReplayComponent() {
}

void ATBLPlayerController::ClosePropertyDebugger() {
}

void ATBLPlayerController::CloseMovementDebugger() {
}

void ATBLPlayerController::ClientUpdateVoiceStateForPlayer_Implementation(ATBLPlayerState* NewPlayer) {
}

void ATBLPlayerController::ClientSwitchToSpectator_Implementation() {
}

void ATBLPlayerController::ClientStartOnlineGame_Implementation() {
}

void ATBLPlayerController::ClientSpawnerStartAllowingControl_Implementation(ASpawner* InSpawner, ATBLCharacter* Char) {
}

void ATBLPlayerController::ClientShowTeamSelectScreen_Implementation() {
}

void ATBLPlayerController::ClientShowLoadoutScreen_Implementation() {
}

void ATBLPlayerController::ClientShowHudMarkerPointEvent_Implementation(FName HudMarkerTag, float TicketsModified, int32 TeamIndex) {
}

void ATBLPlayerController::ClientSetVisibilityOfAllObjectiveZones_Implementation(bool IsVisible) {
}

void ATBLPlayerController::ClientSetSyntheticInputMovement_Implementation(bool bEnable) {
}

void ATBLPlayerController::ClientSetSyntheticInputAI_Implementation(bool bEnable) {
}

void ATBLPlayerController::ClientSetSyntheticInputActions_Implementation(bool bEnable) {
}

void ATBLPlayerController::ClientSetSpectatorLocation_Implementation(FVector InLocation, FRotator InRotation) {
}

void ATBLPlayerController::ClientRequestPostMatchInfo_Implementation() {
}

void ATBLPlayerController::ClientReceiveObjectiveContextMessage_Implementation(const FObjectiveContextMessage ObjectiveContextMessage) {
}

void ATBLPlayerController::ClientReceiveLocalizedObjectiveMessage_Implementation(const FObjectiveMessage& ObjectiveMessage) {
}

void ATBLPlayerController::ClientReceiveLocalizedChat_Implementation(const FText& FormatText, TEnumAsByte<EChatType::Type> Type) {
}

void ATBLPlayerController::ClientReceiveGameModeMessages_Implementation(const TArray<FGameModeMessage>& GameModeMessages) {
}

void ATBLPlayerController::ClientReceiveGameModeMessage_Implementation(const FGameModeMessage& GameModeMessage) {
}

void ATBLPlayerController::ClientReceiveDecapHead_Implementation(AInventoryItem* InDecapHead) {
}

void ATBLPlayerController::ClientReceiveDeathRecap_Implementation(FDeathRecap DeathRecap) {
}

void ATBLPlayerController::ClientReceivedAutoBalanceNotification_Implementation(EFaction NewFaction) {
}

void ATBLPlayerController::ClientReceiveChat_Implementation(ATBLPlayerState* SenderPlayerState, const FString& S, TEnumAsByte<EChatType::Type> Type, bool IsSenderDev, FColor OverrideColor) {
}

void ATBLPlayerController::ClientPushCmd_Implementation(const FString& Cmd) {
}

void ATBLPlayerController::ClientPromptPlayerMessageRequest_Implementation(FGameplayTag MessageTag, int32 MessageId) {
}
bool ATBLPlayerController::ClientPromptPlayerMessageRequest_Validate(FGameplayTag MessageTag, int32 MessageId) {
    return true;
}

void ATBLPlayerController::ClientPrintCustomizationItems_Implementation(const TArray<FPrimaryAssetId>& Items) {
}

void ATBLPlayerController::ClientPostGameStartMatchmaking_Implementation(bool bAlways) {
}

void ATBLPlayerController::ClientPostGameMigrateToNewMatchmakingServer_Implementation(const FString& ConnectString) {
}

void ATBLPlayerController::ClientPostAKSoundsOnActor_Implementation(AActor* SoundActor, const TArray<UAkAudioEvent*>& Sounds) {
}

void ATBLPlayerController::ClientPostAKSoundOnActor_Implementation(AActor* SoundActor, UAkAudioEvent* Sound) {
}

void ATBLPlayerController::ClientPostAKSoundAtLocation_Implementation(FVector_NetQuantize Location, UAkAudioEvent* Sound) {
}

void ATBLPlayerController::ClientPostAkSound_Implementation(UAkAudioEvent* Sound) {
}

void ATBLPlayerController::ClientPlayEmote_Implementation(FName EmoteName) {
}
bool ATBLPlayerController::ClientPlayEmote_Validate(FName EmoteName) {
    return true;
}

void ATBLPlayerController::ClientPlayAimedAtSound_Implementation() {
}

void ATBLPlayerController::ClientOnRevivedOtherPlayer_Implementation(APawn* RevivedPawn) {
}

void ATBLPlayerController::ClientOnPlayerRevived_Implementation(APawn* RevivingPawn) {
}

void ATBLPlayerController::ClientOnCounteredAttack_Implementation(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter) {
}

void ATBLPlayerController::ClientOnBlockedAttack_Implementation(const EDefenderBlockedPolicy BlockPolicy, ATBLCharacter* AttackingCharacter, const bool bWasProjectile) {
}

void ATBLPlayerController::ClientNotifyWaveJoinResponse_Implementation(ASpawnWave* Wave, bool bJoinedWaveSuccess) {
}

void ATBLPlayerController::ClientNotifyPendingSpawn_Implementation(ASpawner* PendingSpawner, float ServerSpawnTimeSeconds) {
}

void ATBLPlayerController::ClientNotifyForwardSpawnAwaitingCombatTimer_Implementation(AForwardSpawnWave* ForwardWave) {
}

void ATBLPlayerController::ClientNotifyCausedDamage_Implementation(const FDamageTakenEventCompressed Event) {
}

void ATBLPlayerController::ClientKicked_Implementation(const FText& KickReason) {
}

void ATBLPlayerController::ClientHandleGlobalGameNotification_Implementation(EGlobalGameNotificationCategory Category, const FText& Title, const FText& Body, FName Subcategory, UObject* Data) {
}

void ATBLPlayerController::ClientGoingToSpawnAtSpawner_Implementation(ASpawner* InSpawner) {
}

void ATBLPlayerController::ClientFadeOut_Implementation(const float PlaybackSpeed) {
}

void ATBLPlayerController::ClientFadeIn_Implementation(const float PlaybackSpeed) {
}

void ATBLPlayerController::ClientEndOnlineGame_Implementation() {
}

void ATBLPlayerController::ClientDrawDebugTracerSphere_Implementation(FVector Center, float Radius, int32 Segments, FColor Color) {
}

void ATBLPlayerController::ClientDrawDebugTracerBox_Implementation(FVector Center, FVector Extent, FQuat Rotation, FColor Color) {
}

void ATBLPlayerController::ClientConfirmExit_Implementation() {
}

void ATBLPlayerController::ClientClearPostMatchInfo_Implementation() {
}

void ATBLPlayerController::ClientCausedFallDeath_Implementation(const FDeathDamageTakenEvent FallDamage) {
}

void ATBLPlayerController::ClientCancelPlayerMessageRequest_Implementation(int32 MessageId) {
}
bool ATBLPlayerController::ClientCancelPlayerMessageRequest_Validate(int32 MessageId) {
    return true;
}

void ATBLPlayerController::ClientBroadcastDebugMessage_Implementation(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly) {
}

void ATBLPlayerController::ClientApprovedLoadout_Implementation(bool IsLoadoutApproved, TSubclassOf<ATBLCharacter> RequestedSubclass, FLoadout RequestedLoadout) {
}

void ATBLPlayerController::ClientAcknowledgeTeamRequest_Implementation(bool bSuccess, EFaction Faction) {
}

void ATBLPlayerController::ClientAckDoneTravelling_Implementation() {
}

void ATBLPlayerController::ClearServerHistoryList() {
}

void ATBLPlayerController::ClearSeenGameUpdates() {
}

void ATBLPlayerController::ClearPlayerHasAcceptedNDA() {
}

void ATBLPlayerController::ClearMovementMetrics() {
}

void ATBLPlayerController::ClearLoadedSoundBanks() {
}

void ATBLPlayerController::ClearFlavorStats() {
}

void ATBLPlayerController::CinematicSpectatorCamera() {
}

bool ATBLPlayerController::CheckPersonalityOwnership(TEnumAsByte<EAudioPersonalityType::Type> InPersonality, TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction InFaction) {
    return false;
}

void ATBLPlayerController::ChatUnmutePlayer(APlayerState* Unmuted) {
}

void ATBLPlayerController::ChatMutePlayer(APlayerState* Muted) {
}

FOwnershipResponse ATBLPlayerController::CanUseLoadoutItem(const TSubclassOf<ULoadoutSelection>& LoadoutSelection, const TSubclassOf<AInventoryItem>& Item) {
    return FOwnershipResponse{};
}

FOwnershipResponse ATBLPlayerController::CanUseLoadout(const TSubclassOf<ULoadoutSelection>& LoadoutSelection) {
    return FOwnershipResponse{};
}

FOwnershipResponse ATBLPlayerController::CanUseCharacter(const TSubclassOf<ATBLCharacter>& CharacterSubclass) {
    return FOwnershipResponse{};
}

bool ATBLPlayerController::CanSwitchCamera() const {
    return false;
}

bool ATBLPlayerController::CanPlayerCallKickVote(APlayerState* KickTarget) {
    return false;
}

void ATBLPlayerController::BugAnimation() {
}

void ATBLPlayerController::BroadcastDebugMessage(const FString& Message, FColor TextColor, float Duration, bool bToAll, bool bTeamOnly) {
}

void ATBLPlayerController::Benchmark(int32 Workscale) {
}

void ATBLPlayerController::AutoInputRecord() {
}

void ATBLPlayerController::AttachCameraToWeapon(FName WeaponName, bool bUseWeaponRotation) {
}

void ATBLPlayerController::AttachCameraToProjectile(bool bUseProjectileRotation) {
}

void ATBLPlayerController::AttachCameraToHorse(FName BoneName, bool bUseBoneRotation) {
}

void ATBLPlayerController::AttachCameraToBone(FName BoneName, bool bUseBoneRotation) {
}

bool ATBLPlayerController::AreCompoundActionKeysDown(FName CompoundAction) {
    return false;
}

void ATBLPlayerController::AnalyticsQuery(const FString& Map, const FString& BuildId) {
}

void ATBLPlayerController::AdminSay(FString& Msg) {
}

void ATBLPlayerController::Admin(const FString& Cmd) {
}

void ATBLPlayerController::AddViewedItem(const FPrimaryAssetId& ItemId) {
}

void ATBLPlayerController::AddUncheckedLevelUpResult(const FPrimaryAssetId& NewLevelUpItem) {
}

void ATBLPlayerController::AddOnPossessedAutoVo(FOnPossessedAutoVo OnPossessedAutoVo) {
}

void ATBLPlayerController::AddFriendById(const FString& UniqueId) {
}

void ATBLPlayerController::AddAllViewedItems(TEnumAsByte<EAudioClassType::Type> CharacterType, EFaction Faction, FName AssetsTypeName) {
}

void ATBLPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLPlayerController, bAutomaticallyChooseSpawnWave);
    DOREPLIFETIME(ATBLPlayerController, bCheatsEnabled);
    DOREPLIFETIME(ATBLPlayerController, NextSpawnWave);
    DOREPLIFETIME(ATBLPlayerController, MinimumSpawnDelayOverride);
    DOREPLIFETIME(ATBLPlayerController, bDrawDebugSpectatorCamera);
    DOREPLIFETIME(ATBLPlayerController, DebugSpectatorCamera);
}

ATBLPlayerController::ATBLPlayerController() {
    this->GameplayTasksComponent = CreateDefaultSubobject<UGameplayTasksComponent>(TEXT("GameplayTasksComponent"));
    this->bPlayingPrologue = false;
    this->bShuffleLoadout = false;
    this->bStartedForceRespawn = false;
    this->TeamDamage30SecThreshold = 200.00f;
    this->TeamDamage2MinThreshold = 400.00f;
    this->BotTeamDamageScale = 0.30f;
    this->TeamDamageWarningLevel = 0;
    this->bReceivedInitialLoadouts = false;
    this->bAwaitingInitialRequestedPlayerClass = true;
    this->bIsShufflingLoadout = false;
    this->bAutoSprint = true;
    this->bAltAttackWithMovement = false;
    this->bAccessAllItems = false;
    this->bShowPlayerListOnStartupInOverview = true;
    this->bPlayerHasAcceptedNDA = false;
    this->bPlayerHasPlayedTutorial = false;
    this->bPlayerHasAcceptedPurchaseDisclaimer = false;
    this->bPlayerOpenedTutorial = true;
    this->LoginTime = 0.00f;
    this->LastPingTime = 0.00f;
    this->TimeSinceRotationInputWasNonZero = 0.00f;
    this->bShowMyParryBox = false;
    this->bShowOtherParryBoxes = false;
    this->DecapHead = NULL;
    this->bIsSpeaking = false;
    this->SelfCameraInputComponent = NULL;
    this->bPlayerIsWaitingToEnterSpectatorMode = false;
    this->bPlayerSelectedSpectatorMode = false;
    this->bFirstTimeSpectating = true;
    this->bIsLoadoutScreenOpen = false;
    this->bIsHeadlessClient = false;
    this->InputReplayComponent = NULL;
    this->SavedFov = 0.00f;
    this->LastVFov = 0.00f;
    this->bIsTravelling = false;
    this->bIdleWarned = false;
    this->bTBSDevMode = false;
    this->DisplayDebugScrollY = 0.00f;
    this->bAutomaticallyChooseSpawnWave = true;
    this->LastPossessedCharacter = NULL;
    this->bCheatsEnabled = false;
    this->NextSpawner = NULL;
    this->ClientSpawnerStartAllowingControl_PendingSpawner = NULL;
    this->CurrentPendingSpawner = NULL;
    this->CinematicsComponent = CreateDefaultSubobject<UCinematicsComponent>(TEXT("CinematicsComponent"));
    this->HighPriorityAKSwitches.AddDefaulted(1);
    this->PlayerExertionAKSwitches.AddDefaulted(12);
    this->LowPriorityAKSwitches.AddDefaulted(1);
    this->WeaponNameStrings.AddDefaulted(10);
    this->ArmourTypeStrings.AddDefaulted(9);
    this->WeaponActionNameStrings.AddDefaulted(12);
    this->CombatStateStrings.AddDefaulted(6);
    this->CharacterSoundDummy = NULL;
    this->WeaponSoundDummy = NULL;
    this->NextSpawnWave = NULL;
    this->MinimumSpawnDelayOverride = -1.00f;
    this->bDisableHUDPostProcess = false;
    this->WaitingForSpawnGoreHead = NULL;
    this->bIsPostMatchMatchmaking = false;
    this->bIsReadyToPostMatchMatchmakingTravel = false;
    this->ItemPreVisualizationHelper = NULL;
    this->PlayerToCommendOrForgive = NULL;
    this->bDisplaySwingThroughInfo = false;
    this->bDrawDebugTracers = false;
    this->bDrawClientDebugTracers = false;
    this->bDrawDebugTracerCache = false;
    this->bDrawDebugTracerDirection = false;
    this->bDrawDebugWeaponTip = false;
    this->bDrawDebugParryHit = false;
    this->bDrawDebugTracersClear = true;
    this->bDrawDebugMeleeHit = false;
    this->bDrawDebugVisibilityCheck = false;
    this->bDrawDebugFacingCheck = false;
    this->bDrawDebugBackSwingCheck = false;
    this->bDrawDebugCamera = false;
    this->bDrawDebugProjectile = false;
    this->bDrawDebugShield = false;
    this->bDrawDebugHorseImpact = false;
    this->bDrawDebugRangedInaccuracy = false;
    this->bDrawDebugSpectatorCamera = false;
    this->bDebugIgnoreAI = false;
    this->NextSpawnTeam = 0;
    this->SpamCheckPeriod = 0.00f;
    this->SpamCheckPeriodMaxMessages = 0;
    this->SpamMuteDurationMin = 0.00f;
    this->SpamMuteDurationIncreasePerMute = 0.00f;
    this->SpamMuteDurationMax = 0.00f;
    this->SpamMutedTime = 0.00f;
    this->SpamMutedDuration = 0.00f;
    this->SpamCheckIndex = 0;
    this->CustomizationCharacter = NULL;
    this->ThirdPersonFOVCap = 100.00f;
    this->LastInputTime = 0.00f;
    this->LastReplicatedPawn = NULL;
    this->CinematicSpectatorCameraClass = UCineCameraComponent::StaticClass();
    this->DisplayDebugScrollDir = 0;
    this->QuestPool = CreateDefaultSubobject<UQuestPool>(TEXT("QuestPool"));
    this->CampaignList = CreateDefaultSubobject<UCampaignList>(TEXT("CampaignList"));
    this->QuestsCachedData = NULL;
    this->CampaignsCachedData = NULL;
    this->TimeOfLastDeath = 0.00f;
    this->PossesedActor = NULL;
    this->bPossessionInitialized = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->DefaultWeaponIdsDataTable = NULL;
    this->DisableAimedAtSoundEvent = 0.00f;
    this->MaxDistanceToHearSound = 9000000.00f;
    this->LongBowAimCurve = NULL;
    this->TargetCharacter = NULL;
    this->DefaultWeaponsCustomizationsAg = NULL;
    this->DefaultWeaponsCustomizationsMa = NULL;
    this->DefaultWeaponsCustomizationsTe = NULL;
    this->AimAssistTarget = NULL;
    this->AimAssistPreviousTargetBias = 0.00f;
    this->bPlayerCustomizationReceived = false;
    this->CloudViewedItems = NULL;
    this->FlavorStatsPC = NULL;
    this->CloudMutedPlayers = CreateDefaultSubobject<UCloudMutedPlayers>(TEXT("CloudMutedPlayers"));
}

