#include "ReplicationPredictionState.h"

FReplicationPredictionState::FReplicationPredictionState() {
    this->MoveCheckCount = 0;
    this->NeedsReplicationCount = 0;
    this->MoveSameLocationCount = 0;
    this->MoveSameVelocityCount = 0;
    this->MaxTimeCount = 0;
    this->ReplicationKeyChangeCount = 0;
    this->LastMovementGatheredFrame = 0;
    this->LastNeedsReplicationTime = 0.00f;
    this->LastReplicationKey = 0;
    this->CurrentSubobjectBucketOffset = 0;
}

