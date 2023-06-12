#include "CombatStateCancelAttack.h"

FCombatStateCancelAttack::FCombatStateCancelAttack() {
    this->ClientTimeStamp = 0.00f;
    this->AttackID = 0;
    this->ClientCombatStateIndex = 0;
    this->bIsPreMovement = false;
}

