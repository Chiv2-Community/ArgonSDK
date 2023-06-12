#include "FirstPersonCineCameraComponent.h"

UFirstPersonCineCameraComponent::UFirstPersonCineCameraComponent() {
    this->SecondsBeforeTakingOverCameraMin = 0.60f;
    this->SecondsBeforeTakingOverCameraMax = 1.20f;
    this->SecondsSpentOutOfRange = 0.00f;
    this->CameraTakeoverMinAngle = 25.00f;
    this->CameraTakeoverMaxAngle = 70.00f;
    this->SnapBackRotationRate = 1.00f;
    this->BlendAlpha = 1.00f;
    this->bCanLockRotation = true;
    this->bAlwaysUsePawnPitch = false;
    this->bAlwaysUsePawnYaw = false;
    this->bToldPCToIgnoreLook = false;
    this->bEnableThirdPersonMesh = false;
    this->CameraLockMode = ECinematicCameraTargetLockMode::Tracking;
    this->bHorizontalLock = false;
    this->HorizontalLockYaw = 0.00f;
}

