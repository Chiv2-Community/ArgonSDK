#include "Ability.h"

FAbility::FAbility() {
    this->Owner = NULL;
    this->Spec = NULL;
    this->InitiatingInventoryItem = NULL;
    this->SharedActivationMethod = NULL;
    this->SharedTargetMethod = NULL;
}

