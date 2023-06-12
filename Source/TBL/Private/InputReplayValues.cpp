#include "InputReplayValues.h"

FInputReplayValues::FInputReplayValues() {
    this->DeltaTime = 0.00f;
    this->MoveForward = 0.00f;
    this->MoveRight = 0.00f;
    this->Turn = 0.00f;
    this->LookUp = 0.00f;
    this->bSprint = false;
    this->bAltAttack = false;
}

