#include "SphereTargetMethod.h"

void USphereTargetMethod::GetSphereCenter(FVector& SphereCenter, FTransform& ControllerTransform) {
}

void USphereTargetMethod::DelayFinish() {
}

USphereTargetMethod::USphereTargetMethod() {
    this->bTargetSelf = false;
    this->SphereRadius = 0.00f;
    this->bUseZLimiters = false;
    this->ZUpLimiter = 0.00f;
    this->ZDownLimiter = 0.00f;
    this->bUseTargetChannel = false;
    this->TargetChannel = ECC_Pawn;
    this->MaxRange = 0.00f;
    this->MaxTargets = 0;
    this->CheckVisibility = ETargetVisibilityCheck::NoVisibilityCheck;
    this->bUseControllerRotation = false;
    this->bUseMountRotation = false;
    this->DelayFinishTime = 0.00f;
    this->SphereHitDirection = ESphereHitDirection::FromSphereCenter;
}

