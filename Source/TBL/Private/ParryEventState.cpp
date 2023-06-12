#include "ParryEventState.h"

FParryEventState::FParryEventState() {
    this->AttackerInventoryItemClass = NULL;
    this->AttackerInventoryItem = NULL;
    this->DefenderInventoryItemClass = NULL;
    this->DefenderInventoryItem = NULL;
    this->DefenderCrowdControlVariant = ECrowdControlVariant::CrowdControlVariant1;
    this->ParryAttackID = 0;
    this->AttackerBlockedPolicy = EAttackerBlockedPolicy::None;
    this->DefenderBlockedPolicy = EDefenderBlockedPolicy::None;
    this->bIsAltAttack = false;
    this->bDefenderDisarmed = false;
    this->bProjectileAttack = false;
    this->bIsCounterSuccess = false;
    this->bTakeDamage = false;
    this->bSameAttackClash = false;
    this->bWasBlockedWithParryForgivenessWindow = false;
}

