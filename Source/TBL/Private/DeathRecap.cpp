#include "DeathRecap.h"

FDeathRecap::FDeathRecap() {
    this->ForceRepByte = 0;
    this->LastDamageTaken = 0.00f;
    this->DamageDoneThisLife = 0.00f;
    this->DamageTakenThisLife = 0.00f;
    this->ParriesThisLife = 0;
    this->CountersThisLife = 0;
    this->SiegeKillsThisLife = 0;
    this->BattlecriesThisLife = 0;
    this->MaxHealth = 0.00f;
    this->KillerHealthPercent = 0.00f;
    this->DamageCausedByKilledPlayerPercent = 0.00f;
    this->KillingBlowAbilitySpec = NULL;
}

