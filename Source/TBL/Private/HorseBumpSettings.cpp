#include "HorseBumpSettings.h"

FHorseBumpSettings::FHorseBumpSettings() {
    this->BumpVelocity = 0.00f;
    this->BumpTime = 0.00f;
    this->BumpTurnRate = 0.00f;
    this->MinHorseBumpAngle = 0.00f;
    this->MinWorldBumpAngle = 0.00f;
    this->MaxWorldBumpAngle = 0.00f;
    this->MinBumpSlowDown = 0.00f;
    this->MaxBumpSlowDown = 0.00f;
    this->MinBumpAngleForCameraShift = 0.00f;
    this->MinAngleBetweenCameraAndHorseForwardForCameraShift = 0.00f;
    this->SideImpactBumpAngle = 0.00f;
    this->SideImpactOtherBumpAngle = 0.00f;
    this->BumpScaleBySpeed = NULL;
}

