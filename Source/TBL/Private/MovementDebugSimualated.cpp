#include "MovementDebugSimualated.h"

FMovementDebugSimualated::FMovementDebugSimualated() {
    this->ActorNetGUID = 0;
    this->RootMotion = 0;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = 0;
    this->ClientTimeStamp = 0.00f;
    this->MovementSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->CannotMove = 0;
    this->bIsSprinting = 0;
    this->bIsSprintDecelerating = 0;
    this->bWantsToSprint = 0;
    this->bIsAutorunSprinting = 0;
    this->bIsForcedAutorun = 0;
    this->bCinematicRestrictedControl = 0;
    this->AutorunMovementMode = 0;
    this->SprintSpeed = 0.00f;
    this->bLockMesh = 0;
    this->LockMeshYaw = 0.00f;
    this->LockMeshTurnLimit = 0.00f;
    this->LastSyncMovementTime = 0.00f;
    this->ReplicationGraphFrame = 0;
    this->NextReplicationFrameNum = 0;
    this->LastRepFrameNum = 0;
    this->ReplicationPeriodFrame = 0;
    this->FastPath_NextReplicationFrameNum = 0;
    this->FastPath_LastRepFrameNum = 0;
    this->FastPath_ReplicationPeriodFrame = 0;
    this->CullDistance = 0.00f;
    this->bIsHorse = 0;
    this->bHasDriver = 0;
    this->DriverMovementMode = MOVE_None;
    this->DriverCustomMovementMode = 0;
}

