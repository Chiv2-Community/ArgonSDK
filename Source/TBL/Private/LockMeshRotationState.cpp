#include "LockMeshRotationState.h"

FLockMeshRotationState::FLockMeshRotationState() {
    this->Count = 0;
    this->Yaw = 0.00f;
    this->TurnLimit = 0.00f;
    this->bEnabled = false;
    this->bUpdating = false;
    this->EndTime = 0.00f;
    this->CurrentYaw = 0.00f;
}

