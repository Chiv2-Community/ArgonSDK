#include "HealOverTime.h"

FHealOverTime::FHealOverTime() {
    this->Amount = 0.00f;
    this->Speed = 0.00f;
    this->Curve = NULL;
    this->StartTime = 0.00f;
    this->bOverheal = false;
    this->TotalHealed = 0.00f;
    this->AppliedReceivedScoreEvent = false;
    this->HealingSource = EHealingSource::None;
}

