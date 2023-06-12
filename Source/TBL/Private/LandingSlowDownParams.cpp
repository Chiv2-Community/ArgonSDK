#include "LandingSlowDownParams.h"

FLandingSlowDownParams::FLandingSlowDownParams() {
    this->SlowDownTime = 0.00f;
    this->PercentDecrease = 0.00f;
    this->CurveAsset = NULL;
    this->bIsActive = 0.00f;
    this->CurrentTime = 0.00f;
    this->StatInstanceId = 0;
}

