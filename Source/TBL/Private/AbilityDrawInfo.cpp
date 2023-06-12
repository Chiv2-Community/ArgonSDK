#include "AbilityDrawInfo.h"

FAbilityDrawInfo::FAbilityDrawInfo() {
    this->InterruptCooldownTime = 0.00f;
    this->MaxInterruptCooldownTime = 0.00f;
    this->bAftertouchable = false;
    this->bActiveAbility = false;
    this->Spec = NULL;
    this->bIsAbilityActive = false;
}

