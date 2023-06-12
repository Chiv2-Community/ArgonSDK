#include "BoxTargetMethod.h"

void UBoxTargetMethod::DelayFinish() {
}

UBoxTargetMethod::UBoxTargetMethod() {
    this->bTargetSelf = false;
    this->bUseControllerRotation = false;
    this->bUseMountRotation = false;
    this->DelayFinishTime = 0.00f;
    this->TargetChannel = ECC_Pawn;
    this->CheckVisibility = ETargetVisibilityCheck::NoVisibilityCheck;
}

