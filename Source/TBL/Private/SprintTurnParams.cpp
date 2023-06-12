#include "SprintTurnParams.h"

FSprintTurnParams::FSprintTurnParams() {
    this->bEnabled = false;
    this->TurnRateCurve = NULL;
    this->MaxAngle = 0.00f;
    this->Deceleration = 0.00f;
    this->DecelerationTurnLimit = 0.00f;
    this->SprintTurnCooldown = NULL;
}

