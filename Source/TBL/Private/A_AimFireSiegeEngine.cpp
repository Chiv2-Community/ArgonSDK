#include "A_AimFireSiegeEngine.h"

void UA_AimFireSiegeEngine::TryCharge() {
}

void UA_AimFireSiegeEngine::TryAim() {
}

void UA_AimFireSiegeEngine::OnDismount(ATBLCharacter* Driver, EDismountType DismountType) {
}

void UA_AimFireSiegeEngine::Fire() {
}

void UA_AimFireSiegeEngine::EndAction() {
}

UA_AimFireSiegeEngine::UA_AimFireSiegeEngine() {
    this->AimEndTime = -1.00f;
    this->NextRecalculateTime = -1.00f;
    this->bCanBeCharged = false;
    this->AdjustmentCount = 0;
    this->bIsFiring = false;
    this->MaxAdjustments = 0;
    this->RandomCharge = 0.50f;
}

