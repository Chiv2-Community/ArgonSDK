#include "TBLCatapultAnimInstance.h"

void UTBLCatapultAnimInstance::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* NewCombatState) {
}

void UTBLCatapultAnimInstance::OnCatapultStateChanged(uint8 State, uint8 PreviousState) {
}

void UTBLCatapultAnimInstance::OnCatapultMounted(ATBLCharacter* Character) {
}

void UTBLCatapultAnimInstance::OnCatapultFireNoDriver() {
}

void UTBLCatapultAnimInstance::OnCatapultDismounted(ATBLCharacter* Character, EDismountType DismountType) {
}

void UTBLCatapultAnimInstance::CatapultLaunchCharacters() {
}

void UTBLCatapultAnimInstance::CatapultFireAction() {
}

void UTBLCatapultAnimInstance::AnimNotify_catapultFireEnd_Action() {
}

UTBLCatapultAnimInstance::UTBLCatapultAnimInstance() {
    this->CatapultActor = NULL;
    this->MountedCharacter = NULL;
    this->IsActive = false;
    this->CharacterAnimBP = NULL;
    this->Is3p = false;
    this->ChargePercent = 0.00f;
    this->bInteractable = false;
    this->bIsPacked = false;
    this->bWantsToFire = false;
}

