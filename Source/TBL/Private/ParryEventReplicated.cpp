#include "ParryEventReplicated.h"

FParryEventReplicated::FParryEventReplicated() {
    this->AttackerInventoryItem = NULL;
    this->AttackerInventoryItemClass = NULL;
    this->DefenderInventoryItemClass = NULL;
    this->ParryAttackID = 0;
    this->AttackerAttackIndex = 0;
    this->DefenderAttackIndex = 0;
    this->AttackerPostCombatStateIndex = 0;
    this->DefenderPostCombatStateIndex = 0;
    this->DefenderCrowdControlVariant = ECrowdControlVariant::CrowdControlVariant1;
    this->bIsAltAttack = false;
    this->bDefenderDisarmed = false;
    this->bProjectileAttack = false;
    this->bIsCounterSuccess = false;
    this->bSameAttackClash = false;
}

