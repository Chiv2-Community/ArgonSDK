#include "PostDamageEventInfoCompressed.h"

FPostDamageEventInfoCompressed::FPostDamageEventInfoCompressed() {
    this->DamageTakerCombatStateIndex = 0;
    this->CrowdControlVariant = ECrowdControlVariant::CrowdControlVariant1;
    this->bNewCombatState = false;
}

