#include "IncomingAttackInfo.h"

FIncomingAttackInfo::FIncomingAttackInfo() {
    this->Actor = NULL;
    this->CombatState = NULL;
    this->bAltAttack = false;
    this->bIsCounter = false;
    this->bIsFeint = false;
    this->bIsHeavy = false;
    this->bIsCounterSuccess = false;
}

