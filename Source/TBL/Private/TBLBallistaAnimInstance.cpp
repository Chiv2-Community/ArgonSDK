#include "TBLBallistaAnimInstance.h"


void UTBLBallistaAnimInstance::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState) {
}

void UTBLBallistaAnimInstance::OnBallistaRepaired() {
}

void UTBLBallistaAnimInstance::OnBallistaMounted(ATBLCharacter* Character) {
}

void UTBLBallistaAnimInstance::OnBallistaDismounted(ATBLCharacter* Character, EDismountType DismountType) {
}

UTBLBallistaAnimInstance::UTBLBallistaAnimInstance() {
    this->BallistaActor = NULL;
    this->MountedCharacter = NULL;
    this->BallistaPitch = 0.00f;
    this->BallistaYaw = 0.00f;
    this->IsLoaded = false;
    this->IsActive = false;
    this->CharacterAnimBP = NULL;
    this->Is3p = false;
}

