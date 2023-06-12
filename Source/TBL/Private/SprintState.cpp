#include "SprintState.h"

FSprintState::FSprintState() {
    this->StateStartTime = 0.00f;
    this->SprintSpeed = 0.00f;
    this->TurnRateId = 0;
    this->TurnRateId_SprintTurn = 0;
    this->TurnLimit = 0.00f;
    this->SprintStopSpeed = 0.00f;
    this->SprintEndTime = 0.00f;
    this->bSkipAcceleration = false;
    this->SprintAttackTime = 0.00f;
    this->SprintTurnTime = 0.00f;
    this->bSprintTurnToSprint = false;
    this->TimeBelowMinSpeed = 0.00f;
    this->SprintTurnWeight = 0.00f;
    this->SprintTurnDirection = 0.00f;
    this->TurnYaw = 0.00f;
}

