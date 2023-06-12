#include "TBLBombardAnimInstance.h"


void UTBLBombardAnimInstance::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState) {
}

void UTBLBombardAnimInstance::OnBombardRepaired() {
}

void UTBLBombardAnimInstance::OnBombardMounted(ATBLCharacter* Character) {
}

void UTBLBombardAnimInstance::OnBombardFireActionBegin() {
}

void UTBLBombardAnimInstance::OnBombardFireAction() {
}

void UTBLBombardAnimInstance::OnBombardDismounted(ATBLCharacter* Character, EDismountType DismountType) {
}

void UTBLBombardAnimInstance::AddLogEntry(const FString& LogEntry) {
}

UTBLBombardAnimInstance::UTBLBombardAnimInstance() {
    this->BombardActor = NULL;
    this->MountedCharacter = NULL;
    this->BombardPitch = 30.00f;
    this->BombardYaw = 0.00f;
    this->IsLoaded = false;
    this->IsActive = false;
    this->CharacterAnimBP = NULL;
    this->Is3p = false;
    this->bWantsToFire = false;
}

