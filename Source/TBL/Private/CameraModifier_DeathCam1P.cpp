#include "CameraModifier_DeathCam1P.h"

UCameraModifier_DeathCam1P::UCameraModifier_DeathCam1P() {
    this->YawRotationLimit = 45.00f;
    this->PitchRotationLimit = 45.00f;
    this->TurnLimitStrength = 70.00f;
    this->TurnRateId = -1;
    this->HorizLockId = -1;
    this->VertLockId = -1;
}

