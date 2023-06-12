#include "HorseToHorseBump.h"

FHorseToHorseBump::FHorseToHorseBump() {
    this->ClientTimeStamp = 0.00f;
    this->OtherHorse = NULL;
    this->TurnAngle = 0.00f;
    this->OtherTurnAngle = 0.00f;
    this->Scale = 0.00f;
    this->Direction = false;
    this->OtherDirection = false;
    this->RearImpact = false;
    this->SideImpact = false;
}

