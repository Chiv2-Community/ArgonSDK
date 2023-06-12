#include "HorseMovementActionInput.h"

FHorseMovementActionInput::FHorseMovementActionInput() {
    this->Forward = 0.00f;
    this->Strafe = 0.00f;
    this->Turn = 0.00f;
    this->StrafeTurn = 0.00f;
    this->ForwardBonus = 0.00f;
    this->StrafeBonus = 0.00f;
    this->TurnBonus = 0.00f;
    this->Boost = false;
}

