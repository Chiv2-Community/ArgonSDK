#include "AnimDeathParams.h"

FAnimDeathParams::FAnimDeathParams() {
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->InventoryItem = NULL;
    this->AttackType = NULL;
    this->RandomSeed = 0;
    this->KillReason = EKillReason::Damage;
    this->bIsOnHorse = false;
    this->bAltAttack = false;
}

