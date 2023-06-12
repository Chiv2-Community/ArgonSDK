#include "AimAssistStateData.h"

FAimAssistStateData::FAimAssistStateData() {
    this->OuterMagnetismYaw = 0.00f;
    this->OuterMagnetismPitch = 0.00f;
    this->InnerMagnetismYaw = 0.00f;
    this->InnerMagnetismPitch = 0.00f;
    this->bUseMomentaryMagnetism = false;
    this->bPrioritizeCloserTargets = false;
    this->bRequireLookInput = false;
    this->bEnableFriction = false;
    this->bFrictionInnerOnly = false;
    this->bScalingDistanceFrictionEnabled = false;
    this->bScalingDistanceFrictionEnabledInnerOnly = false;
    this->bEnableInnerBoxForgiveness = false;
    this->bCompareInputSimilarity = false;
    this->ActivationMinDistance = 0.00f;
    this->ActivationMaxDistance = 0.00f;
}

