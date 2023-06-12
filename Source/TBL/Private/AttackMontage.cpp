#include "AttackMontage.h"

FAttackMontage::FAttackMontage() {
    this->AnimSet = NULL;
    this->AnimSet3p = NULL;
    this->Montage = NULL;
    this->Montage3p = NULL;
    this->PlayRate = 0.00f;
    this->bIsHeavy = false;
    this->CurrentSectionLength = 0.00f;
    this->SectionStartTime = 0.00f;
    this->TracerStartTime = 0.00f;
    this->TracerEndTime = 0.00f;
    this->PlayRateCurve = NULL;
    this->bUseWindupMontage = false;
    this->bHasRootMotion = false;
    this->FeintBlendOutMontage = NULL;
}

