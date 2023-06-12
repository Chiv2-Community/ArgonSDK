#include "LockMeshRotationParams.h"

FLockMeshRotationParams::FLockMeshRotationParams() {
    this->LockMeshAngle = ELockMeshAngle::UseCharacterRotation;
    this->Offset = 0.00f;
    this->TurnLimit = 0.00f;
    this->bOverrideBlendInTime = false;
    this->BlendInTime = 0.00f;
}

