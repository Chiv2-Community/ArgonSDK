#include "CombatStateFire.h"

FCombatStateFire::FCombatStateFire() {
    this->ClientTimeStamp = 0.00f;
    this->AttackID = 0;
    this->RangedInaccuracy = 0.00f;
    this->CamPitchAndYaw = 0;
    this->bIsPreMovement = false;
}

