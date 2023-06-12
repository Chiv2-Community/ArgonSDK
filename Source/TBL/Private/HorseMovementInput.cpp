#include "HorseMovementInput.h"

FHorseMovementInput::FHorseMovementInput() {
    this->Forward = 0.00f;
    this->Strafe = 0.00f;
    this->Turn = 0.00f;
    this->Direction = EHorseMovementInput::None;
    this->ForwardTime = 0.00f;
    this->StrafeTime = 0.00f;
    this->TurnTime = 0.00f;
    this->DirectionTime = 0.00f;
}

