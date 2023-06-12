#include "TutorialPlayerControlParams.h"

FTutorialPlayerControlParams::FTutorialPlayerControlParams() {
    this->bLockMovement = false;
    this->bEnableCrouch = false;
    this->bEnableDash = false;
    this->bLockView = false;
    this->bDisableInput = false;
    this->bDoInterpLocation = false;
    this->bDoLookAt = false;
    this->LookAtActor = NULL;
}

