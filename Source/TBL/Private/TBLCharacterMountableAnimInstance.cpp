#include "TBLCharacterMountableAnimInstance.h"

void UTBLCharacterMountableAnimInstance::OnHealthChanged(float Amount, AActor* Initiator) {
}

void UTBLCharacterMountableAnimInstance::OnAnimationStart() {
}




void UTBLCharacterMountableAnimInstance::AnimNotify_MountableActorKilledAnim_End() {
}

void UTBLCharacterMountableAnimInstance::AnimNotify_InFinalMontageSection() {
}

void UTBLCharacterMountableAnimInstance::AnimNotify_CharacterRecovery_End() {
}

void UTBLCharacterMountableAnimInstance::AnimNotify_CharacterFire_Action() {
}

UTBLCharacterMountableAnimInstance::UTBLCharacterMountableAnimInstance() {
    this->CharacterMountedableActor = NULL;
    this->LeftCharacter = NULL;
    this->RightCharacter = NULL;
    this->LeftCharacterMesh = NULL;
    this->RightCharacterMesh = NULL;
    this->ChargePercent = 0.00f;
    this->LeftCharacterAnimBP = NULL;
    this->RightCharacterAnimBP = NULL;
}

