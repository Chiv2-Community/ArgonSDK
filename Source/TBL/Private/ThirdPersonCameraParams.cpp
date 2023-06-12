#include "ThirdPersonCameraParams.h"

FThirdPersonCameraParams::FThirdPersonCameraParams() {
    this->CrouchOffset = 0.00f;
    this->CrouchSpeed = 0.00f;
    this->KnockdownOffset = 0.00f;
    this->KnockdownSpeed = 0.00f;
    this->ZoomInSpeed = 0.00f;
    this->ZoomOutSpeed = 0.00f;
    this->CollisionDepth = 0.00f;
    this->CurrentCameraOffset = 0.00f;
    this->bUsePawnControlRotation = false;
    this->bUseDefaultCameraRotation = false;
    this->bResetCollision = false;
}

