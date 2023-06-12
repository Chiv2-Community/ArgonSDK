#include "OutOfCombatZoneAuthority.h"

void AOutOfCombatZoneAuthority::StartForgivenessTimer(ATBLCharacter* Character, FTimerHandle& TimerHandle) {
}

bool AOutOfCombatZoneAuthority::ShouldIgnoreCharacter(ATBLCharacter* Character) const {
    return false;
}








bool AOutOfCombatZoneAuthority::IsInForgivenessTime(ACharacter* Character) const {
    return false;
}

void AOutOfCombatZoneAuthority::HandleOnPlayerKilled(FDeathEvent DeathEvent) {
}

void AOutOfCombatZoneAuthority::HandleOnArenaRoundWon(EFaction Winner) {
}

void AOutOfCombatZoneAuthority::HandleLocalControllerPossessedPawn(APawn* Pawn) {
}

void AOutOfCombatZoneAuthority::HandleLocalControllerPlayerStateReplicated(APlayerState* PS) {
}

void AOutOfCombatZoneAuthority::HandleEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AOutOfCombatZoneAuthority::HandleCharacterSpawned(ATBLCharacter* Character) {
}

void AOutOfCombatZoneAuthority::HandleCharacterDestroyed(AActor* DestroyedActor) {
}

void AOutOfCombatZoneAuthority::HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AOutOfCombatZoneAuthority::HandleActionTimerFired(ATBLCharacter* Character) {
}

float AOutOfCombatZoneAuthority::GetTimerDelaySeconds(ATBLCharacter* Character, bool& OutIsInForgivenessTime) const {
    return 0.0f;
}

float AOutOfCombatZoneAuthority::GetForgivenessTime(ATBLCharacter* Character) const {
    return 0.0f;
}

float AOutOfCombatZoneAuthority::GetCurrentLowestTimeLeft(const TArray<AOutOfCombatZoneAuthority*>& Authorities, ATBLCharacter* Character) {
    return 0.0f;
}

bool AOutOfCombatZoneAuthority::CanHaveForgivenessTime(ATBLCharacter* Character) const {
    return false;
}

void AOutOfCombatZoneAuthority::CancelForgivenessTimer(ATBLCharacter* Character) {
}

AOutOfCombatZoneAuthority::AOutOfCombatZoneAuthority() {
    this->bInverted = false;
    this->TimerDelaySeconds = 10.00f;
    this->HorseTimerDelaySeconds = 20.00f;
    this->RecentSpawnForgivenessSeconds = 20.00f;
    this->HorseRecentSpawnForgivenessSeconds = 20.00f;
    this->bIsLocalPlayerOverlapping = false;
    this->bDisabled = false;
}

