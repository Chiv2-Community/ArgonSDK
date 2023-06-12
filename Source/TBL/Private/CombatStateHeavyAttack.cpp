#include "CombatStateHeavyAttack.h"

FCombatStateHeavyAttack::FCombatStateHeavyAttack() {
    this->ClientTimeStamp = 0.00f;
    this->AnimationTimerOvertime = 0.00f;
    this->AttackID = 0;
    this->bIsHeavy = false;
    this->bIsPreMovement = false;
}

