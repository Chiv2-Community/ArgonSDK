#include "CinematicsComponent.h"

void UCinematicsComponent::SetUIState(FGameplayTag UIState) {
}

bool UCinematicsComponent::IsInState(FGameplayTag State) const {
    return false;
}

void UCinematicsComponent::HandleTeamChanged(ATBLTeam* NewTeam) {
}

void UCinematicsComponent::HandleSuicideNotify(EKillReason KillReason) {
}

void UCinematicsComponent::HandlePossessedPawn(APawn* Pawn) {
}

void UCinematicsComponent::HandlePendingSpawn(ASpawner* PendingSpawner, float ServerSpawnTimeSeconds) {
}

void UCinematicsComponent::HandleNextSpawnWaveChanged(ASpawnWave* SpawnWave) {
}

void UCinematicsComponent::HandleNextSpawnTeamChanged(ATBLTeam* NewTeam) {
}

void UCinematicsComponent::HandleMatchStateChanged(FName MatchState) {
}

void UCinematicsComponent::HandleGoingToSpawnAtSpawner(ASpawner* Spawner) {
}

void UCinematicsComponent::HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState) {
}

void UCinematicsComponent::HandleCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void UCinematicsComponent::GotoState(FGameplayTag NextState) {
}

UCinematicState* UCinematicsComponent::GetState(FGameplayTag Tag) {
    return NULL;
}

FGameplayTag UCinematicsComponent::GetCurrentUIState() {
    return FGameplayTag{};
}

FGameplayTag UCinematicsComponent::GetCurrentStateTag() const {
    return FGameplayTag{};
}

UCinematicState* UCinematicsComponent::GetCurrentState() {
    return NULL;
}

void UCinematicsComponent::BindToPlayerState(APlayerState* PlayerState) {
}

UCinematicsComponent::UCinematicsComponent() {
    this->CinematicAnimationRemapping = NULL;
}

