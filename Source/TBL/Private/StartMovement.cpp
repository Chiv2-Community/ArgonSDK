#include "StartMovement.h"

void UStartMovement::OnStartMovement() {
}

void UStartMovement::OnFinishMovement() {
}

UStartMovement::UStartMovement() {
    this->MovementSequenceName = EAbilitiesMovementSequence::WindupLunge;
    this->StrengthScaling = 1.00f;
    this->bApplyToInitiator = false;
    this->bExecuteClientFirst = false;
    this->MovementSequence = NULL;
    this->MovementInstance = NULL;
}

