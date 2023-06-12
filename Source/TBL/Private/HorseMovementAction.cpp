#include "HorseMovementAction.h"

FHorseMovementAction::FHorseMovementAction() {
    this->CurrentTime = 0.00f;
    this->CurrentStrafe = 0.00f;
    this->CurrentTurnAngle = 0.00f;
    this->EndCondition = EHorseMovementEndCondition::None;
    this->EndValue = 0.00f;
    this->bRemoveOnStateChange = false;
}

