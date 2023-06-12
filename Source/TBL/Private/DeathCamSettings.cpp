#include "DeathCamSettings.h"

FDeathCamSettings::FDeathCamSettings() {
    this->Duration = 0.00f;
    this->CameraDistanceScale = NULL;
    this->CameraTargetZOffset = 0.00f;
    this->CameraRotationLagSpeed = 0.00f;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->FocusLocationInterpSpeed = 0.00f;
    this->DisableInputTime = 0.00f;
    this->DampenRotationTime = 0.00f;
    this->InvertPitchViewRotation = false;
    this->InvertYawViewRotation = false;
}

