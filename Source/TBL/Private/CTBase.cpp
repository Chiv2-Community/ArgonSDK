#include "CTBase.h"

bool UCTBase::Apply(FCustomizationContext& InContext, APawn* InPawn) {
    return false;
}

UCTBase::UCTBase() {
    this->LoadPriority = 0;
}

