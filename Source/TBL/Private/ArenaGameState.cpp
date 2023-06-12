#include "ArenaGameState.h"
#include "Net/UnrealNetwork.h"

void AArenaGameState::SetRemainingLives(EFaction Faction, int32 InRemainingLives) {
}

void AArenaGameState::OnRep_VictoryPodiumBindings() {
}

void AArenaGameState::OnRep_VictoryPodium() {
}

void AArenaGameState::OnRep_RoundVictories() {
}

void AArenaGameState::OnRep_RemainingLives() {
}

void AArenaGameState::OnRep_LivingPlayers() {
}

void AArenaGameState::OnRep_DefenderPlayersAtStartOfRound() {
}

void AArenaGameState::OnRep_AttackerPlayersAtStartOfRound() {
}

bool AArenaGameState::IsMatchPointForFaction(EFaction Faction) const {
    return false;
}

int32 AArenaGameState::GetRoundVictories(EFaction Faction) const {
    return 0;
}

int32 AArenaGameState::GetRemainingLives(EFaction Faction) {
    return 0;
}

float AArenaGameState::GetPreCountdownTimeRemaining() const {
    return 0.0f;
}

TArray<AArenaPlayerState*> AArenaGameState::GetPlayersAtStartOfRound(EFaction Faction) {
    return TArray<AArenaPlayerState*>();
}

int32 AArenaGameState::GetNumberOfLivingPlayers(EFaction Faction) {
    return 0;
}

EFaction AArenaGameState::GetMatchPointFaction() const {
    return EFaction::Agatha;
}

void AArenaGameState::ClientPlayPodiumSequence_Implementation() {
}

void AArenaGameState::BroadcastRoundWonBy_Implementation(EFaction Winners) {
}

void AArenaGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArenaGameState, RoundsSetting);
    DOREPLIFETIME(AArenaGameState, TeamLivesSetting);
    DOREPLIFETIME(AArenaGameState, FinalLivesSetting);
    DOREPLIFETIME(AArenaGameState, TimeBetweenRoundsSetting);
    DOREPLIFETIME(AArenaGameState, RoundTimeLimitSetting);
    DOREPLIFETIME(AArenaGameState, MaxPlayersSetting);
    DOREPLIFETIME(AArenaGameState, ReplicatedVictoryPodium);
    DOREPLIFETIME(AArenaGameState, ReplicatedVictoryPodiumBindings);
    DOREPLIFETIME(AArenaGameState, ReplicatedPodiumVictorInfos);
    DOREPLIFETIME(AArenaGameState, PreCountdownEndTime);
    DOREPLIFETIME(AArenaGameState, RoundVictories);
    DOREPLIFETIME(AArenaGameState, RemainingLives);
    DOREPLIFETIME(AArenaGameState, LivingPlayers);
    DOREPLIFETIME(AArenaGameState, AttackerPlayersAtStartOfRound);
    DOREPLIFETIME(AArenaGameState, DefenderPlayersAtStartOfRound);
    DOREPLIFETIME(AArenaGameState, PodiumCinematicCamera);
}

AArenaGameState::AArenaGameState() {
    this->RoundsSetting = 0;
    this->TeamLivesSetting = 0;
    this->FinalLivesSetting = 0;
    this->TimeBetweenRoundsSetting = 0.00f;
    this->RoundTimeLimitSetting = 0.00f;
    this->MaxPlayersSetting = 0.00f;
    this->PreCountdownEndTime = 0.00f;
    this->RoundVictories.AddDefaulted(6);
    this->RemainingLives.AddDefaulted(6);
    this->LivingPlayers.AddDefaulted(6);
    this->PodiumCinematicCamera = NULL;
}

