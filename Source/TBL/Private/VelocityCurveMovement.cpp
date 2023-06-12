#include "VelocityCurveMovement.h"

UVelocityCurveMovement::UVelocityCurveMovement() {
    this->Curve = NULL;
    this->StrengthX = 0.00f;
    this->StrengthY = 0.00f;
    this->Duration = 0.00f;
    this->BlendInTime = 0.00f;
    this->bDoNotGoBelowSprintSpeed = false;
}

