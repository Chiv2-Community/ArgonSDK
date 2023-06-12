#include "TurnLimitState.h"

FTurnLimitState::FTurnLimitState() {
    this->CurveLeft = NULL;
    this->CurveRight = NULL;
    this->CurveUp = NULL;
    this->CurveDown = NULL;
    this->ScaleByDegreesTurned = NULL;
    this->StrengthLeft = 0.00f;
    this->StrengthRight = 0.00f;
    this->StrengthUp = 0.00f;
    this->StrengthDown = 0.00f;
    this->TurnRateId = 0;
    this->HoldingTime = 0.00f;
}

