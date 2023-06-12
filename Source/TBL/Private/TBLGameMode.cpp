#include "TBLGameMode.h"
#include "TBLAIController.h"

void ATBLGameMode::UpdatePS5MatchResponsibility(APlayerController* ExcludePlayer) {
}

void ATBLGameMode::UpdateBotBackfill(int32 NewNumPlayers) {
}

void ATBLGameMode::TBSSkipStage() {
}

void ATBLGameMode::TBSSetUseMapList(bool UseMapList) {
}

void ATBLGameMode::TBSModifyTeamScore(int32 TeamId, int32 Score) {
}

void ATBLGameMode::TBSManuallyStartGame() {
}

void ATBLGameMode::TBSEndWarmup() {
}

void ATBLGameMode::TBSEndGame(int32 WinningTeam) {
}

void ATBLGameMode::TBSAddStageTime(float TimeMinutes) {
}

void ATBLGameMode::Slomo(float T) {
}

void ATBLGameMode::SetPS5MatchResponsiblePlayer(ATBLPlayerState* NewPlayerState) {
}

void ATBLGameMode::SetPS5MatchId(const FString& NewPS5MatchId) {
}

void ATBLGameMode::RemoveSessionBan(FSessionBannedPlayer BannedPlayer) {
}

void ATBLGameMode::RemoveBots(bool bRemoveLevelBots, bool bRemoveBackfillBots) {
}

bool ATBLGameMode::PlayerRequestNewTeam(AController* Controller, ATBLTeam* Team, bool bImmediatelySwitch) {
    return false;
}

bool ATBLGameMode::PlayerRequestBeginSpectating(AController* Controller) {
    return false;
}

void ATBLGameMode::PlayerReadyToSpawn(USpawnQueuer* SpawnQueuer, AController* Player, ASpawner* Spawner) {
}

void ATBLGameMode::PerformDeferredSpawnRequest(FPendingSpawn DeferredSpawn) {
}

void ATBLGameMode::PerformAutoBalancePriorToGameStart() {
}

void ATBLGameMode::OverrideAIBehavior(const FString& BehaviorTreeName) {
}

void ATBLGameMode::OnPCPossessedPawn(APawn* APawn) {
}

void ATBLGameMode::NotifyStageStart(const FString& StageName, float TimeRemaining) {
}

void ATBLGameMode::NotifyStageEnd(EFaction WinningFaction) {
}

void ATBLGameMode::NotifyRoundTimeOut() {
}

void ATBLGameMode::KickByNetIdWithTimer(const FUniqueNetIdRepl& UniqueId, const FString& Reason, float BanTime) {
}

void ATBLGameMode::KickByName(const FString& PlayerName, const FString& Reason, int32 BanTime) {
}

void ATBLGameMode::KickById(const FString& PlayerId, const FString& Reason, float Time) {
}

void ATBLGameMode::KickAllPlayers() {
}






bool ATBLGameMode::IsValidHorseCompatibleServer() {
    return false;
}

bool ATBLGameMode::IsSpawnWaveInQueue(const ASpawnWave* SpawnWave) const {
    return false;
}


void ATBLGameMode::InitTeams_Implementation() {
}

void ATBLGameMode::InitSpawnQueuers() {
}

void ATBLGameMode::HandleAIPossessedPawn(ATBLAIController* AIC, APawn* APawn) {
}

FString ATBLGameMode::GetServerIdentifier() {
    return TEXT("");
}

FString ATBLGameMode::GetServerDisplayName() {
    return TEXT("");
}

int32 ATBLGameMode::GetNumberOfPlayersOnFaction(EFaction Faction, bool bRequirePlayerState) const {
    return 0;
}

TSoftClassPtr<UUserWidget> ATBLGameMode::GetGameModeWidgetClass() const {
    return NULL;
}

float ATBLGameMode::GetEpilogueDuration() const {
    return 0.0f;
}

void ATBLGameMode::GetCharacterPerformanceTestInfo(bool& IsRunningTest, int32& TestIndex) {
}

TArray<AActor*> ATBLGameMode::GetAIObjectiveActors(ATBLCharacter* Character) const {
    return TArray<AActor*>();
}

USpawnQueuer* ATBLGameMode::FindSpawnQueue(FName SpawnQueueName) const {
    return NULL;
}

void ATBLGameMode::DisableSpawningBots() {
}

void ATBLGameMode::ClientAddMainMenuMessage_Implementation(const FText& Message) {
}

void ATBLGameMode::ClearStageProgress(FStageActorProgress Progress) {
}

void ATBLGameMode::ClearPS5MatchResponsiblePlayer() {
}

void ATBLGameMode::ClearPS5MatchId() {
}

void ATBLGameMode::ClearAllObjectiveAITags() {
}

void ATBLGameMode::BroadcastLocalizedChatForFaction(EFaction ReceivingFaction, const FText& Msg, TEnumAsByte<EChatType::Type> Type) {
}

void ATBLGameMode::BroadcastLocalizedChat(const FText& Msg, TEnumAsByte<EChatType::Type> Type) {
}

void ATBLGameMode::BroadcastChat(AActor* Sender, const FString& Msg, TEnumAsByte<EChatType::Type> Type, FColor OverrideColor) {
}

void ATBLGameMode::BeginEpilogue() {
}

void ATBLGameMode::BanByName(const FString& PlayerName, int32 Hours, const FString& Reason) {
}

void ATBLGameMode::BanById(const FString& PlayerId, int32 Hours, const FString& Reason) {
}

void ATBLGameMode::AwardVictory(EFaction InVictor, ATBLPlayerState* InPlayerVictor) {
}

void ATBLGameMode::AwardFFAVictory(ATBLPlayerState* InPlayerVictor) {
}

void ATBLGameMode::AutoBalanceByPlayerKills() {
}

void ATBLGameMode::AutoBalanceByNumPlayers() {
}

void ATBLGameMode::AddStageTime_Implementation(float TimeMinutes) {
}

void ATBLGameMode::AddStageProgress(FStageActorProgress Progress) {
}

void ATBLGameMode::AddPlayerNullBots(int32 InNumBots) {
}

void ATBLGameMode::AddPlayerDummyBots(int32 InNumBots) {
}

void ATBLGameMode::AddPlayerBotsWhitelist(int32 InNumBots, const FString& WhiteListName) {
}

void ATBLGameMode::AddPlayerBotsTrailerDefault(int32 InNumBots) {
}

void ATBLGameMode::AddPlayerBotsEx(int32 InNumBots, int32 Team, int32 Class, const FString& WhiteListName, TArray<FString> ExcludeCategories) {
}

void ATBLGameMode::AddPlayerBots(int32 InNumBots, TArray<FString> ExcludeCategories) {
}

void ATBLGameMode::AddNullBots(int32 InNumBots) {
}

void ATBLGameMode::AddDummyBots(int32 InNumBots) {
}

void ATBLGameMode::AddBotsEx(int32 InNumBots, int32 Team, int32 Class) {
}

void ATBLGameMode::AddBots(int32 InNumBots) {
}

void ATBLGameMode::ActuallyLeaveMap() {
}

ATBLGameMode::ATBLGameMode() {
    this->GameModeSettingsClass = NULL;
    this->Teams.AddDefaulted(2);
    this->FFATeam = NULL;
    this->AttackingFaction = EFaction::None;
    this->DefendingFaction = EFaction::None;
    this->DefaultHorseClass = NULL;
    this->SeamlessTravelEndTime = 0.00f;
    this->GamemodeType = EGameModeType::TeamObjective;
    this->CreateGameModeType = EGameModeType::MAX;
    this->bFirstBotMatch = false;
    this->GameScoringInfo = NULL;
    this->AlwaysOnMusicManager = NULL;
    this->ContextVOManager = NULL;
    this->bPerfomedDeferredSpawnThisFrame = false;
    this->bDisablePlayerNamePlates = false;
    this->bOnlyShowNamesOnTeammates = false;
    this->bIsFFAGameMode = false;
    this->PostGameSlomo = 0.50f;
    this->bHideHudImportantMessages = false;
    this->TimeBetweenLoadoutVolumeUses = 1.50f;
    this->bUsePrioritySpawnSettings = false;
    this->bUseProximitySpawnSettings = false;
    this->IgnoreClassLimits = false;
    this->SecondsBetweenWavesPlayerCountBonus = NULL;
    this->AIControllerClass = ATBLAIController::StaticClass();
    this->AIBehaviorTree = NULL;
    this->bAnalyticsShutdown = false;
    this->BotBackfillEnabled = false;
    this->BotBackfillLowPlayers = 10;
    this->BotBackfillLowBots = 12;
    this->BotBackfillHighPlayers = 30;
    this->BotBackfillHighBots = 0;
    this->IdleKickTimerSpectate = 150.00f;
    this->IdleKickTimerDisconnect = 300.00f;
    this->bHorseCompatibleServer = false;
    this->bUseOpenLoadout = false;
    this->bRespawnImmediately = false;
    this->bLoggingAbilityEvents = false;
    this->OverrideAIObjective = NULL;
    this->AutoBalanceGracePeriodSeconds = 60.00f;
    this->bEnableAutoDemoRecording = false;
    this->bIsAITestMap = false;
    this->Maplist.AddDefaulted(4);
    this->bUseMaplist = true;
    this->PostMatchTime = 10;
    this->ServerName = TEXT("Saintes");
    this->MapListIndex = 1;
    this->ClassLimits.AddDefaulted(2);
    this->AutoBalancePlayersByTeamNumbers = true;
    this->AutoBalancePlayersByKills = false;
    this->TimeBetweenTeamKillBalanceChecks = 300;
    this->TimeBetweenPlayerNumBalanceChecks = 30;
    this->StartOfMatchGracePeriodForAutoBalance = 30;
    this->StartOfMatchGracePeriodForTeamSwitching = 0;
    this->MinimumKillsModifierForAutoBalance = 1.50f;
    this->AutoBalanceKillRelevancyTime = 180.00f;
    this->AutoBalanceKillThreshold = 0.80f;
    this->AutoBalanceTimeUntilForcedRespawn = 10;
    this->bSpectatorsCannotSendToAllChat = false;
    this->bClientSideWeaponTracers = false;
    this->TimeEnteredWaitingToStart = 0.00f;
    this->MinPlayers = 1;
    this->DesiredPlayersToStartPercentage = 0.75f;
    this->MinTimeBeforeStartingMatch = 30.00f;
    this->MaxTimeBeforeStartingMatch = 45.00f;
    this->bManuallyStartMatch = false;
    this->bUsePrepareMatchTimer = true;
    this->PrepareMatchDuration = 0.00f;
    this->EpilogueDuration = 20.00f;
    this->bUseStrictTeamBalanceEnforcement = true;
    this->TeamBalanceOptions.AddDefaulted(3);
    this->AutoBalanceOptions.AddDefaulted(2);
    this->AutoBalancePlayerPriorityConfig.AddDefaulted(3);
    this->BlockVoteKicking = false;
    this->Victor = EFaction::None;
    this->LastPlayerSpawnTime = 0.00f;
    this->ConfigWarmupTime = 40;
    this->OverrideAIBehaviorTree = NULL;
    this->GoldAwardTimePeriod = 0;
    this->GoldMultiplierByDailyHourTimeDilation = 1.00f;
    this->GoldAwardByTimePeriodAmount = 0;
    this->GoldMaxFromPlaytimePerGame = 0;
    this->XpMaxFromPlaytimePerGame = 0;
    this->XpAwardTimePeriod = 0;
    this->XpMultiplierByDailyHourTimeDilation = 1.00f;
    this->XpAwardByTimePeriodAmount = 0;
    this->GameModeXPMultiplier = 0.10f;
    this->PostMatchMatchmakingMode = EPostMatchMatchmakingMode::None;
    this->bReadyToPostMatchTravel = false;
    this->GameServerQuery = NULL;
    this->AutoBalanceWithFriendsBlocked = false;
}

