#include "QueuedMovementState.h"

FQueuedMovementState::FQueuedMovementState() {
    this->MovementState = EPushableComponentMovementState::STATIONARY;
    this->ExpiryTime = 0.00f;
}

