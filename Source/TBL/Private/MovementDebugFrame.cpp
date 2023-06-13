#include "MovementDebugFrame.h"

FMovementDebugFrame::FMovementDebugFrame() {
    this->Version = 0;
    this->ClientTimeStamp = 0.00f;
    this->DeltaTime = 0.00f;
    this->FrameCounter = 0;
    this->WorldTime = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->RootMotion = 0;
    this->bMoveForwardHeld = 0;
    this->bMoveBackwardHeld = 0;
    this->bMoveRightHeld = 0;
    this->bMoveLeftHeld = 0;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = 0;
    this->MovementSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->CannotMove = 0;
    this->TimeInCombatState = 0.00f;
    this->CombatStateLength = 0.00f;
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
    this->IsOnLadder = 0;
    this->LastSyncMovementTime = 0.00f;
    this->ClientAuthorativePosition = 0;
    this->MaxErrorSquared = 0.00f;
    this->bDidMovementCorrection = 0;
    this->LastCorrectionTimestamp = 0.00f;
    this->bIsFirstDualMove = 0;
    this->TracerStartTime = 0.00f;
    this->TracerEndTime = 0.00f;
    this->bSkipUpdate = 0;
    this->bSkipEvaluation = 0;
    this->AdditionalTime = 0.00f;
    this->bDidPossess = 0;
    this->LastTimeDiscrepancyDetectedTime = 0.00f;
    this->TimeBetweenDiscrepancyDetected = 0.00f;
    this->StatFPS = 0.00f;
    this->StatMS = 0.00f;
    this->Ping = 0.00f;
    this->NetSaturatedCount = 0;
    this->NetConnections = 0;
    this->LastFrameTime = 0.00f;
    this->LastNetFlushTime = 0.00f;
    this->TotalRetryReliableCount = 0;
    this->TotalRetryReliableBytes = 0;
    this->TotalRetryUnreliableCount = 0;
    this->TotalRetryUnreliableBytes = 0;
    this->TotalSendFailBytes = 0;
    this->AveragePingTime = 0.00f;
    this->AverageFrameTime = 0.00f;
    this->AveragePingTimePerMinute = 0.00f;
    this->AverageFrameTimePerMinute = 0.00f;
    this->AvailableCpuTimer = 0.00f;
    this->AvailableCpuRatio = 0.00f;
    this->NetInPackets = 0;
    this->NetInPacketsLost = 0;
    this->NetInOutOfOrderPackets = 0;
    this->NetOutPackets = 0;
    this->NetOutPacketsLost = 0;
    this->NetOutOutOfOrderPackets = 0;
    this->NetAutonomousMovementCorrections = 0;
    this->NetAutonomousMovementCorrectionBunches = 0;
    this->LastAutonomousMovementCorrectionTime = 0.00f;
    this->SkippedServerMoves = 0;
    this->SkippedServerMoveFrames = 0;
    this->LastSkippedServerMoveFrame = 0;
    this->TotalServerTime = 0.00f;
    this->MovementSequence = NULL;
}
