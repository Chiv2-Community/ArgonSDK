#include "CameraModifier_Offset.h"

UCameraModifier_Offset::UCameraModifier_Offset() {
    this->AttachToActor = NULL;
    this->AttachToMesh = NULL;
    this->bAttachToProjectile = false;
    this->LastProjectile = NULL;
    this->bOverrideRotation = false;
    this->bUseAttachRotation = false;
}

