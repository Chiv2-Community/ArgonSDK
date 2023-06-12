#include "VarianceEngageParams.h"

FVarianceEngageParams::FVarianceEngageParams() {
    this->bInitialized = false;
    this->StrafePattern = EVariancePattern::None;
    this->StrafeTimeOffset = 0.00f;
    this->StrafeRateModifier = 0.00f;
    this->StrafeStrength = 0.00f;
    this->EngageDistancePattern = EVariancePattern::None;
    this->EngageDistanceTimeOffset = 0.00f;
    this->EngageDistanceRateModifier = 0.00f;
    this->EngageDistanceVariance = 0.00f;
}

