#include "ForwardSpawnWave.h"
#include "Net/UnrealNetwork.h"

void AForwardSpawnWave::SpawnOutOfCombatCharacters() {
}

bool AForwardSpawnWave::ShouldResetCombatTimerFor(AController* Controller) const {
    return false;
}

void AForwardSpawnWave::SetPawnsAllowedToForwardSpawn(TArray<APawn*> InPawnsAllowedToForwardSpawn) {
}

void AForwardSpawnWave::SetAwaitingCombatTimer(AController* Controller) {
}

void AForwardSpawnWave::ResetCombatTimerFor(AController* Controller) {
}

void AForwardSpawnWave::OnRep_PawnsAllowedToForwardSpawn() {
}

void AForwardSpawnWave::OnQueuedPlayerTakeDamage(const FDamageTakenEvent& DamageEvent) {
}

void AForwardSpawnWave::OnQueuedPlayerParryEvent(ATBLCharacter* A, ATBLCharacter* B, FParryEventState ParryEventState) {
}

void AForwardSpawnWave::OnQueuedPlayerCauseDamage(const FDamageTakenEvent& DamageEvent) {
}

bool AForwardSpawnWave::IsControllerRecentlyInCombat(AController* Controller) const {
    return false;
}

void AForwardSpawnWave::ForwardSpawnController(AController* Controller) {
}

void AForwardSpawnWave::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AForwardSpawnWave, PawnsAllowedToForwardSpawn);
}

AForwardSpawnWave::AForwardSpawnWave() {
    this->CombatTimerDuration = 5.00f;
}

