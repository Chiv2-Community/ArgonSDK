#include "MovementAction.h"

UMovementAction::UMovementAction() {
    this->FrameOfReference = EMovementFrameOfReference::InitiatorToTarget;
    this->CurrentTime = 0.00f;
}

