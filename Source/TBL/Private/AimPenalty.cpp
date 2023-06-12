#include "AimPenalty.h"

FAimPenalty::FAimPenalty() {
    this->Penalty = 0.00f;
    this->CurrentTime = 0.00f;
    this->BasePenalty = 0.00f;
    this->MaxTime = 0.00f;
    this->Curve = NULL;
}

