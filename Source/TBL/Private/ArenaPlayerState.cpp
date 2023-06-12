#include "ArenaPlayerState.h"
#include "Net/UnrealNetwork.h"

void AArenaPlayerState::OnRep_LivesLeft() {
}

void AArenaPlayerState::OnRep_IsPartOfRound() {
}

void AArenaPlayerState::OnRep_IsDeadAndOutOfLives() {
}

int32 AArenaPlayerState::GetLivesLeft() {
    return 0;
}

bool AArenaPlayerState::GetIsPartOfRound() {
    return false;
}

bool AArenaPlayerState::GetIsDeadAndOutOfLives() {
    return false;
}

void AArenaPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArenaPlayerState, LivesLeft);
    DOREPLIFETIME(AArenaPlayerState, bIsPartOfRound);
    DOREPLIFETIME(AArenaPlayerState, bIsDeadAndOutOfLives);
}

AArenaPlayerState::AArenaPlayerState() {
    this->LivesLeft = 0;
    this->bIsPartOfRound = false;
    this->bIsDeadAndOutOfLives = false;
}

