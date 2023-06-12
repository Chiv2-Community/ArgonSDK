#include "AutorunParams.h"

FAutorunParams::FAutorunParams() {
    this->Spline = NULL;
    this->InSecondsUntilAutorunStops = 0.00f;
    this->bInitialRunIn = false;
    this->bNoStopLocksCamera = false;
    this->StartSpeed = EAutorunStartSpeed::StartStopped;
    this->MovementMode = EAutorunMovementMode::Invalid;
    this->EndOfSplineAction = EAutorunEndOfSplineAction::RestoreFullControl;
    this->AutorunStartTime = 0.00f;
}

