#include "TBLPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void ATBLPlayerState::UploadPing() {
}

void ATBLPlayerState::UpdatePlayerAutoBalanceEligibility(bool NewCanBeAutoBalanced) {
}

void ATBLPlayerState::UpdateDeadCharacters() {
}

void ATBLPlayerState::SyncScoreEvents_Implementation(const TArray<FScoreEventByName>& ScoreEvents) {
}

TArray<FScoreEventStruct> ATBLPlayerState::StatsGetPlayerScoreEvents() {
    return TArray<FScoreEventStruct>();
}

void ATBLPlayerState::SetPlayerVIPStatus(bool IsVIP) {
}

void ATBLPlayerState::SetPartyId(const FString& InPartyId) {
}

void ATBLPlayerState::SetNumInParty(int32 inNumInParty) {
}

void ATBLPlayerState::SetIsFriend(bool IsFriend) {
}

void ATBLPlayerState::ServerUploadPing_Implementation(uint8 NewPing) {
}

void ATBLPlayerState::ServerUpdateFriendStatus_Implementation(ATBLPlayerState* MyFriend, bool IsFriend) {
}

TArray<ATBLPlayerState*> ATBLPlayerState::ReturnListOfFriends(TArray<ATBLPlayerState*> PlayerStates) {
    return TArray<ATBLPlayerState*>();
}

void ATBLPlayerState::ResetPartyId() {
}

void ATBLPlayerState::OnRep_Team() {
}

void ATBLPlayerState::OnRep_Takedowns() {
}

void ATBLPlayerState::OnRep_Presets() {
}

void ATBLPlayerState::OnRep_PlayFabOSSUniqueId() {
}

void ATBLPlayerState::OnRep_PlayerScore() {
}

void ATBLPlayerState::OnRep_PlatformOSSUniqueId() {
}

void ATBLPlayerState::OnRep_PersonalityType() {
}

void ATBLPlayerState::OnRep_OnlineStats() {
}

void ATBLPlayerState::OnRep_OnlineAccount() {
}

void ATBLPlayerState::OnRep_NextSpawnTeam() {
}

void ATBLPlayerState::OnRep_NextSpawnPawnSubclass() {
}

void ATBLPlayerState::OnRep_Kills() {
}

void ATBLPlayerState::OnRep_GlobalRank() {
}

void ATBLPlayerState::OnRep_Deaths() {
}

void ATBLPlayerState::OnRep_ClientPlatform() {
}

void ATBLPlayerState::OnRep_CharacterClass() {
}

void ATBLPlayerState::OnRep_bMustSetLoadout() {
}

void ATBLPlayerState::OnRep_AttachToProjectile() {
}

void ATBLPlayerState::OnPawnDamaged(const FDamageTakenEvent& Event) {
}

void ATBLPlayerState::LocalPlayerPartyLeft(const bool Result) {
}

void ATBLPlayerState::LocalPlayerPartyInviteAccepted(const FString& NewPartyId) {
}

void ATBLPlayerState::LocalPlayerPartyDisbanded() {
}

void ATBLPlayerState::LocalPlayerPartyCreated(const bool Result, const FString& NewPartyId) {
}

bool ATBLPlayerState::IsInParty() {
    return false;
}

bool ATBLPlayerState::GetPlayerVIPStatus() {
    return false;
}

TEnumAsByte<EAudioPersonalityType::Type> ATBLPlayerState::GetPersonalityType() const {
    return EAudioPersonalityType::Chiv1_Ag_Archer;
}

FString ATBLPlayerState::GetPartyId() const {
    return TEXT("");
}

int32 ATBLPlayerState::GetNumInParty() {
    return 0;
}

bool ATBLPlayerState::GetIsFriend() const {
    return false;
}

FLinearColor ATBLPlayerState::GetDisplayColor() {
    return FLinearColor{};
}

void ATBLPlayerState::GetDeathRecapEntryForTakeDowner(FDeathRecapEntry& Entry) {
}

void ATBLPlayerState::GetDeathRecapEntryForKiller(FDeathRecapEntry& Entry) {
}

TArray<FDeathRecapEntry> ATBLPlayerState::GetDeathRecapEntries() {
    return TArray<FDeathRecapEntry>();
}

ATBLCharacter* ATBLPlayerState::GetDeadCharacter(uint8 ID) {
    return NULL;
}

EHardwarePlatform ATBLPlayerState::GetClientHardwarePlatform() {
    return EHardwarePlatform::Platform_Windows;
}

TSubclassOf<ATBLCharacter> ATBLPlayerState::GetCharacterClass(bool& IsDead, bool& IsSpectating) {
    return NULL;
}

void ATBLPlayerState::GetAllPresetsAsArray(TArray<FCustomizationPreset>& OutPresets) {
}

void ATBLPlayerState::ClientScoreOverrideEvent_Implementation(FName RowName, int32 ScoreAmount, ATBLPlayerState* Killed, int16 NoveltyScoreRowIndex) {
}

void ATBLPlayerState::ClientScoreEvent_Implementation(FName RowName, int32 ScoreAmount, ATBLPlayerState* Killed, int32 Bonuses, int16 NoveltyScoreRowIndex) {
}

void ATBLPlayerState::ClientScoreCurveEvent_Implementation(FName RowName, int32 ScoreCurveAmount, int32 ScoreAmount, ATBLPlayerState* Killed, int16 NoveltyScoreRowIndex) {
}

void ATBLPlayerState::ClientForceReplicate_Implementation() {
}

void ATBLPlayerState::ClientBlockInput_Implementation(bool BlockInput) {
}

bool ATBLPlayerState::CanBeAutoBalanced() {
    return false;
}

void ATBLPlayerState::BroadcastStatsLevelUp(TArray<FLevelUpResult> NewLevelUpResults) {
}

void ATBLPlayerState::BroadcastPauseRagdolls_Implementation(bool bPaused) {
}

void ATBLPlayerState::AddDeadCharacter(uint8 ID, ATBLCharacter* InCharacter, bool bSpawnedHead) {
}

void ATBLPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLPlayerState, OnlineStats);
    DOREPLIFETIME(ATBLPlayerState, OnlineAccount);
    DOREPLIFETIME(ATBLPlayerState, AttachToProjectile);
    DOREPLIFETIME(ATBLPlayerState, PlayFabOSSUniqueId);
    DOREPLIFETIME(ATBLPlayerState, PlatformOSSUniqueId);
    DOREPLIFETIME(ATBLPlayerState, Kills);
    DOREPLIFETIME(ATBLPlayerState, Deaths);
    DOREPLIFETIME(ATBLPlayerState, Assists);
    DOREPLIFETIME(ATBLPlayerState, Takedowns);
    DOREPLIFETIME(ATBLPlayerState, GlobalRank);
    DOREPLIFETIME(ATBLPlayerState, PlayerScore);
    DOREPLIFETIME(ATBLPlayerState, NextSpawnPawnSubclass);
    DOREPLIFETIME(ATBLPlayerState, PartyId);
    DOREPLIFETIME(ATBLPlayerState, bIsVIP);
    DOREPLIFETIME(ATBLPlayerState, EquippedPersonalityType);
    DOREPLIFETIME(ATBLPlayerState, NextSpawnTeam);
    DOREPLIFETIME(ATBLPlayerState, Team);
    DOREPLIFETIME(ATBLPlayerState, Faction);
    DOREPLIFETIME(ATBLPlayerState, bIsNPC);
    DOREPLIFETIME(ATBLPlayerState, bIsPlayerCustomizedBot);
    DOREPLIFETIME(ATBLPlayerState, CharacterClass);
    DOREPLIFETIME(ATBLPlayerState, Character);
    DOREPLIFETIME(ATBLPlayerState, LocalizablePlayerName);
    DOREPLIFETIME(ATBLPlayerState, Presets);
    DOREPLIFETIME(ATBLPlayerState, bMustSetLoadout);
    DOREPLIFETIME(ATBLPlayerState, AgathaDisplayColor);
    DOREPLIFETIME(ATBLPlayerState, MasonDisplayColor);
    DOREPLIFETIME(ATBLPlayerState, TenosiaDisplayColor);
    DOREPLIFETIME(ATBLPlayerState, SpectatorDisplayColor);
    DOREPLIFETIME(ATBLPlayerState, NextSpawnLoadout);
    DOREPLIFETIME(ATBLPlayerState, TotalTeamDamage);
    DOREPLIFETIME(ATBLPlayerState, TotalIdleTime);
    DOREPLIFETIME(ATBLPlayerState, InstigatedVotes);
    DOREPLIFETIME(ATBLPlayerState, LastVotedOnTime);
    DOREPLIFETIME(ATBLPlayerState, ClientPlatform);
}

ATBLPlayerState::ATBLPlayerState() {
    this->DeathTime = 0.00f;
    this->TeamBeforeBecameInactive = NULL;
    this->AttachToProjectile = NULL;
    this->WaitForAttachToProjectile = NULL;
    this->Kills = 0;
    this->Deaths = 0;
    this->Assists = 0;
    this->Takedowns = 0;
    this->GlobalRank = 1;
    this->PlayerScore = 0;
    this->ProjectilesFired = 0;
    this->NextSpawnPawnSubclass = NULL;
    this->NumInParty = 0;
    this->CachedMeshClass = NULL;
    this->CachedMeshFaction = EFaction::Agatha;
    this->CachedMesh = NULL;
    this->bWantsOnlineLoad = true;
    this->bReplicateOnlineAccount = false;
    this->BotSelectedAssetsType = EAudioClassType::MAX;
    this->HasBeenAutoBalanced = false;
    this->bCustomizationUploaded = false;
    this->DeadCharacterId = 0;
    this->bIsFriend = false;
    this->bCanBeAutoBalanced = true;
    this->bIsVIP = false;
    this->EquippedPersonalityType = EAudioPersonalityType::MAX;
    this->bQuitter = false;
    this->ActualStartTime = 0;
    this->InactiveTime = 0;
    this->ShowLoadoutDelayTime = 2.00f;
    this->TimeSinceLastOutOfCombat = 0.00f;
    this->OutOfCombatTimeRemaining = 0.00f;
    this->NextSpawnTeam = NULL;
    this->Team = NULL;
    this->Faction = EFaction::Agatha;
    this->bIsNPC = false;
    this->bIsPlayerCustomizedBot = false;
    this->CharacterClass = NULL;
    this->Character = NULL;
    this->bMustSetLoadout = false;
    this->bIsNextSpawnLoadoutOverridden = false;
    this->TotalTeamDamage = 0.00f;
    this->TotalIdleTime = 0.00f;
    this->LastVotedOnTime = 0.00f;
    this->ClientPlatform = EHardwarePlatform::Platform_Unknown;
}

