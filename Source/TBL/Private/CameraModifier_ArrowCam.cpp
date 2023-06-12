#include "CameraModifier_ArrowCam.h"

void UCameraModifier_ArrowCam::UpdateCharacterMesh() {
}

void UCameraModifier_ArrowCam::OnFakeClientAttached(AInventoryItem* ParentItem) {
}

void UCameraModifier_ArrowCam::ArrowCamReleased() {
}

void UCameraModifier_ArrowCam::ArrowCamPressed() {
}

UCameraModifier_ArrowCam::UCameraModifier_ArrowCam() {
    this->Projectile = NULL;
    this->bArrowCamPressed = false;
    this->InputComponent = NULL;
    this->TimeAfterCollision = 0.00f;
    this->bFakeClientStopped = false;
}

