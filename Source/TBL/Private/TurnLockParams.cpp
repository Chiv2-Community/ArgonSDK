#include "TurnLockParams.h"

FTurnLockParams::FTurnLockParams() {
    this->HorizontalLimit = 0.00f;
    this->bShouldInterpolateToHorizontalLimit = false;
    this->HorizontalInterpSpeed = 0.00f;
    this->VerticalLimit = 0.00f;
    this->bShouldInterpolateToVerticalLimit = false;
    this->VerticalInterpSpeed = 0.00f;
    this->bUseRelativeStartingLocation = false;
    this->bLockMesh = false;
    this->Delay = 0.00f;
    this->EndCombatStatePercent = 0.00f;
    this->bOnlyApplyOnRootMotion = false;
    this->bEnabled = false;
    this->bDisableUseControllerRotationYaw = false;
}

