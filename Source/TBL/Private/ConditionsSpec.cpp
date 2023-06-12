#include "ConditionsSpec.h"

UConditionsSpec::UConditionsSpec() {
    this->FallDamageSource = NULL;
    this->FireDamageSource = NULL;
    this->WaterDamageSource = NULL;
    this->DownedDeathSaveHealth = 80;
    this->DownedTurnRatePercent = 60.00f;
    this->ShellShockTime = 6.00f;
    this->BleedingTime = 10.00f;
    this->BleedingTicks = 12;
    this->BleedingDamagePerTick = 10.00f;
    this->BleedingDamageType = NULL;
    this->BleedingFatalTime = 10.00f;
    this->BleedingFatalDamageType = NULL;
    this->BurningTime = 5.00f;
    this->BurningTicks = 5;
    this->BurningDamagePerTick = 10.00f;
    this->BurningDamageType = NULL;
    this->OnFireTime = 5.00f;
    this->OnFireTicks = 5;
    this->OnFireDamagePerTick = 10.00f;
    this->OnFireDamageType = NULL;
    this->CrippledTime = 12.00f;
    this->MaxTimesFallingDamageDeathSave = 99999;
    this->FallingDamageDeathSaveHealth = 1;
    this->MultipleDismembermentDeathSaveHealth = 1;
    this->RequiredOverkillDamageToKill = -60.00f;
    this->BandageKitTime = 12.00f;
    this->InspiredTime = 15.00f;
}

