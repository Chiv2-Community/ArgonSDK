#include "TBLBatteringRamAnimInstance.h"


void UTBLBatteringRamAnimInstance::AnimNotify_ramRecovery_End() {
}

void UTBLBatteringRamAnimInstance::AnimNotify_ramFire_Action() {
}

UTBLBatteringRamAnimInstance::UTBLBatteringRamAnimInstance() {
    this->BatteringRamActor = NULL;
    this->LeftCharacter = NULL;
    this->RightCharacter = NULL;
    this->LeftCharacterMesh = NULL;
    this->RightCharacterMesh = NULL;
    this->ChargePercent = 0.00f;
    this->LeftCharacterAnimBP = NULL;
    this->RightCharacterAnimBP = NULL;
}

