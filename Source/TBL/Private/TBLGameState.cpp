#include "TBLGameState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "VotingManagerComponent.h"

bool ATBLGameState::ShouldShowLoadoutOnPreparingMatch() {
    return false;
}

bool ATBLGameState::ShouldShowLoadoutOnFirstDeath() {
    return false;
}

void ATBLGameState::SetStageTimeRemaining(float TimeInSeconds) {
}

void ATBLGameState::SetStageEndingMusic(FAKAudioStartStopStruct Music) {
}

void ATBLGameState::SetObjectiveContextText(FObjectiveContextMessage NewContextObjectiveMessage) {
}

void ATBLGameState::SetGameModeType(TEnumAsByte<EGameModeType::Type> InGameModeType) {
}

void ATBLGameState::SetCinematicMode(ECinematicGameState State, ALevelSequenceActor* DefenderSequence, ALevelSequenceActor* AttackerSequence) {
}

void ATBLGameState::ResetStagePersistentGameModeMessages() {
}

void ATBLGameState::RemoteStageEndingMusic() {
}

void ATBLGameState::PlayerKilled(AController* Killer, AController* Killed, UDamageSource* DamageSource, FDeathEvent DeathEvent, const FDeathDamageTakenEvent& DamageEvent) {
}

void ATBLGameState::PlayCinematicsWithBinding(ALevelSequenceActor* DefenderSequence, ALevelSequenceActor* AttackerSequence, TMap<ASpawner*, FString> InSpawnerPrefixes) {
}

void ATBLGameState::OnRep_Victor() {
}

void ATBLGameState::OnRep_StageEndingMusic() {
}

void ATBLGameState::OnRep_SequenceBindings() {
}

void ATBLGameState::OnRep_PS5MatchResponsiblePlayer() {
}

void ATBLGameState::OnRep_PS5MatchId() {
}

void ATBLGameState::OnRep_PostMatchEndTime() {
}

void ATBLGameState::OnRep_GameModeType() {
}

void ATBLGameState::OnRep_FactionContextObjectiveMessage() {
}

void ATBLGameState::OnRep_ClassLimits() {
}

void ATBLGameState::OnRep_CinematicState() {
}

void ATBLGameState::NotifyCinematicStartedPlayingTryBinding() {
}

bool ATBLGameState::IsWaitingForMinPlayersToStart() {
    return false;
}

bool ATBLGameState::IsWaitingForAdminToStart() {
    return false;
}

bool ATBLGameState::IsServerBadFrameTime() {
    return false;
}

bool ATBLGameState::IsPostMatch() {
    return false;
}

bool ATBLGameState::IsMatchWaitingToStart() {
    return false;
}

bool ATBLGameState::IsCurrentStage(AActor* Stage) const {
    return false;
}

float ATBLGameState::GetWarmupTimeRemaining() const {
    return 0.0f;
}

ATBLTeam* ATBLGameState::GetTeamWithFaction(EFaction Faction) const {
    return NULL;
}

int32 ATBLGameState::GetSubClassMaxCount(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction) {
    return 0;
}

int32 ATBLGameState::GetSubClassCount(TSubclassOf<ATBLCharacter> CharacterClass) {
    return 0;
}

float ATBLGameState::GetStageTimeRemaining() {
    return 0.0f;
}

TArray<EFaction> ATBLGameState::GetSpawnableTeams(ATBLPlayerState* LocalPlayerState) {
    return TArray<EFaction>();
}

TArray<TSubclassOf<ATBLCharacter>> ATBLGameState::GetSpawnableClasses(ATBLPlayerState* LocalPlayer, EFaction Faction) {
    return TArray<TSubclassOf<ATBLCharacter>>();
}

float ATBLGameState::GetServerTimeDifference() {
    return 0.0f;
}

float ATBLGameState::GetPreparingMatchTimeRemaining() const {
    return 0.0f;
}

float ATBLGameState::GetPostMatchTimeRemaining() {
    return 0.0f;
}

int32 ATBLGameState::GetNumObjectivePointsByCategory(EFaction Faction, TEnumAsByte<EObjectivePointCategory::Type> Category) {
    return 0;
}

float ATBLGameState::GetLocalPostMatchMatchmakingStartTime() {
    return 0.0f;
}

TSoftClassPtr<UUserWidget> ATBLGameState::GetGameModeWidgetClass() const {
    return NULL;
}

float ATBLGameState::GetGameModeEpilogueDuration() const {
    return 0.0f;
}


float ATBLGameState::GetCinematicPlaybackTime() {
    return 0.0f;
}

int32 ATBLGameState::GetArchetypeMaxCount(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction) {
    return 0;
}

int32 ATBLGameState::GetArchetypeCount(TSubclassOf<ATBLCharacter> CharacterClass) {
    return 0;
}

float ATBLGameState::ConvertServerTimeToLocalTime(float ServerTime) {
    return 0.0f;
}

int32 ATBLGameState::CalculateEndOfMatchCommodity(ATBLPlayerController* Player, const FString& Key) {
    return 0;
}

void ATBLGameState::BroadcastSetEpicEndGameState_Implementation(const FEpicEndGameState& InEpicEndGameState) {
}

void ATBLGameState::BroadcastPlayerKilled_Implementation(FDeathEvent DeathEvent) {
}

void ATBLGameState::BroadcastLastTeamScoreEvent_Implementation(FTeamScoreEvent TeamScoreEvent) {
}

void ATBLGameState::BroadcastDestroyTornOffItem_Implementation(FName TornOffName) {
}

void ATBLGameState::AddStagePersistentGameModeMessages(TArray<FGameModeMessage> NewMessages) {
}

void ATBLGameState::AddObjectivePointEvent(EFaction Faction, int32 PointValue, TEnumAsByte<EObjectivePointCategory::Type> Category) {
}

void ATBLGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLGameState, Teams);
    DOREPLIFETIME(ATBLGameState, MapName);
    DOREPLIFETIME(ATBLGameState, GamemodeType);
    DOREPLIFETIME(ATBLGameState, ServerName);
    DOREPLIFETIME(ATBLGameState, Platform);
    DOREPLIFETIME(ATBLGameState, Victor);
    DOREPLIFETIME(ATBLGameState, PlayerVictor);
    DOREPLIFETIME(ATBLGameState, FinalMatchDuration);
    DOREPLIFETIME(ATBLGameState, NextMapName);
    DOREPLIFETIME(ATBLGameState, StageEndTime);
    DOREPLIFETIME(ATBLGameState, StageStartTime);
    DOREPLIFETIME(ATBLGameState, StageProgressList);
    DOREPLIFETIME(ATBLGameState, bDisablePlayerNamePlates);
    DOREPLIFETIME(ATBLGameState, bOnlyShowNamesOnTeammates);
    DOREPLIFETIME(ATBLGameState, bIsGameModeFFA);
    DOREPLIFETIME(ATBLGameState, bDisableTeamSelect);
    DOREPLIFETIME(ATBLGameState, bHideHudImportantMessages);
    DOREPLIFETIME(ATBLGameState, MinRespawnTime);
    DOREPLIFETIME(ATBLGameState, PlayersNeededToStartEarly);
    DOREPLIFETIME(ATBLGameState, MinPlayersToStart);
    DOREPLIFETIME(ATBLGameState, GameplayEventMessageClass);
    DOREPLIFETIME(ATBLGameState, bClientSideWeaponTracers);
    DOREPLIFETIME(ATBLGameState, bServerBadFrameTime);
    DOREPLIFETIME(ATBLGameState, bUseOpenLoadout);
    DOREPLIFETIME(ATBLGameState, ProgressBarPrimaryTeamIndex);
    DOREPLIFETIME(ATBLGameState, ClassLimits);
    DOREPLIFETIME(ATBLGameState, TeamScoreFormatDataTable);
    DOREPLIFETIME(ATBLGameState, FirstSpawnSound);
    DOREPLIFETIME(ATBLGameState, RespawnSound);
    DOREPLIFETIME(ATBLGameState, ObjectivePointArray);
    DOREPLIFETIME(ATBLGameState, bUsingNewSpawnSystem);
    DOREPLIFETIME(ATBLGameState, CinematicState);
    DOREPLIFETIME(ATBLGameState, DefenderCinematicSequence);
    DOREPLIFETIME(ATBLGameState, AttackerCinematicSequence);
    DOREPLIFETIME(ATBLGameState, ReplicatedSequenceBindings);
    DOREPLIFETIME(ATBLGameState, ServerCinematicStartTime);
    DOREPLIFETIME(ATBLGameState, StagePersistentGameModeMessages);
    DOREPLIFETIME(ATBLGameState, StageEndingMusic);
    DOREPLIFETIME(ATBLGameState, ContextObjectiveMessage);
    DOREPLIFETIME(ATBLGameState, LobbyId);
    DOREPLIFETIME(ATBLGameState, PS5MatchId);
    DOREPLIFETIME(ATBLGameState, PS5MatchResponsiblePlayer);
    DOREPLIFETIME(ATBLGameState, WarmupEndTime);
    DOREPLIFETIME(ATBLGameState, PreparingMatchEndTime);
    DOREPLIFETIME(ATBLGameState, PostMatchEndTime);
    DOREPLIFETIME(ATBLGameState, PostMatchMatchmakingStartTimeServer);
    DOREPLIFETIME(ATBLGameState, bBlockVoteKicking);
}

ATBLGameState::ATBLGameState() {
    this->FFATeam = NULL;
    this->NeutralTeamClass = NULL;
    this->GamemodeType = EGameModeType::TeamObjective;
    this->Victor = EFaction::None;
    this->PlayerVictor = NULL;
    this->FinalMatchDuration = 0.00f;
    this->StageEndTime = 0.00f;
    this->StageStartTime = 0.00f;
    this->ServerTimeDifference = 0.00f;
    this->bDisablePlayerNamePlates = false;
    this->bOnlyShowNamesOnTeammates = false;
    this->bIsGameModeFFA = false;
    this->bDisableTeamSelect = false;
    this->bHideHudImportantMessages = false;
    this->MinRespawnTime = 0.00f;
    this->PlayersNeededToStartEarly = 0;
    this->MinPlayersToStart = 0;
    this->bClientSideWeaponTracers = false;
    this->bBadNetworkPerformance = false;
    this->bBadFrameTimePerformance = false;
    this->bServerBadFrameTime = false;
    this->bUseOpenLoadout = false;
    this->ProgressBarPrimaryTeamIndex = 0;
    this->TeamScoreFormatDataTable = NULL;
    this->bUsingNewSpawnSystem = false;
    this->CinematicState = ECinematicGameState::NotReplicated;
    this->DefenderCinematicSequence = NULL;
    this->AttackerCinematicSequence = NULL;
    this->ServerCinematicStartTime = 0.00f;
    this->VotingManagerComponent = CreateDefaultSubobject<UVotingManagerComponent>(TEXT("VotingManager"));
    this->bDisableSpawningBots = false;
    this->WarmupEndTime = 0.00f;
    this->PreparingMatchEndTime = 0.00f;
    this->PostMatchEndTime = -1.00f;
    this->PostMatchMatchmakingStartTimeServer = -1.00f;
    this->bBlockVoteKicking = 0;
    this->bWasNotifiedAboutWaitingToStart = false;
    this->bDelayGarbageCollection = false;
}

