#include "CombatStateInfo.h"

FCombatStateInfo::FCombatStateInfo() {
    this->CombatState = NULL;
    this->AnimationLength = 0.00f;
    this->StartTime = 0.00f;
    this->bStartAttack = false;
    this->Variant = ECrowdControlVariant::CrowdControlVariant1;
}

