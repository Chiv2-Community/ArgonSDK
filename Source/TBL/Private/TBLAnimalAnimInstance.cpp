#include "TBLAnimalAnimInstance.h"
#include "Templates/SubclassOf.h"

void UTBLAnimalAnimInstance::OnAnimationSetChanged(TSubclassOf<UAnimationSet> AnimationSet) {
}

void UTBLAnimalAnimInstance::NotifyTookDamage() {
}

void UTBLAnimalAnimInstance::NotifyStartedPanicking() {
}

void UTBLAnimalAnimInstance::NotifyLanded() {
}

void UTBLAnimalAnimInstance::NotifyKilled() {
}





UTBLAnimalAnimInstance::UTBLAnimalAnimInstance() {
    this->bProcessedDeath = false;
    this->TimeSinceLastHit = 999.00f;
    this->TimeStartedPanicking = 999.00f;
    this->Animal = NULL;
    this->MoveSpeedSq = 0.00f;
    this->bIsMoving = false;
    this->bIsDead = false;
    this->bIsBeingHeld = false;
    this->bIsBeingHeld_Combat = false;
    this->bIsBeingThrown = false;
    this->PreviewAnimationSet = NULL;
    this->AnimationSetBase = NULL;
    this->Stats = NULL;
}

