#include "EarlyHitParams.h"

FEarlyHitParams::FEarlyHitParams() {
    this->Policy = EEarlyHitPolicy::Nothing;
    this->CrowdControlVariant = ECrowdControlVariant::CrowdControlVariant1;
    this->CrowdControlDirection = ECrowdControlDirection::Default;
}

