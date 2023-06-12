#include "TurnLimitParams.h"

FTurnLimitParams::FTurnLimitParams() {
    this->bUseAttackCurve = false;
    this->Curve = NULL;
    this->Strength = 0.00f;
    this->OverrideTime = 0.00f;
}

