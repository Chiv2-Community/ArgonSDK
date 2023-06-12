#include "CameraModifier_TurnLock.h"

UCameraModifier_TurnLock::UCameraModifier_TurnLock() {
    this->Character = NULL;
    this->UseActorRotation = NULL;
    this->UseComponentRotation = NULL;
    this->MaxAngle = 0.00f;
    this->bShouldInterpolateToLimit = false;
    this->InterpSpeed = 1.00f;
}

