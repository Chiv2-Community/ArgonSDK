#include "MovementModifierData.h"

FMovementModifierData::FMovementModifierData() {
    this->ModifierCurve = NULL;
    this->Scale = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->bDisableSprint = false;
}

