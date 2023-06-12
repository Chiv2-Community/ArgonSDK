#include "CameraLockParams.h"

FCameraLockParams::FCameraLockParams() {
    this->Character = NULL;
    this->UseActorRotation = NULL;
    this->UseComponentRotation = NULL;
    this->MaxAngle = 0.00f;
    this->bShouldInterpolateToLimit = false;
    this->InterpSpeed = 0.00f;
}

