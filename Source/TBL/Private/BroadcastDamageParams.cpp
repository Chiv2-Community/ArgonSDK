#include "BroadcastDamageParams.h"

FBroadcastDamageParams::FBroadcastDamageParams() {
    this->Damage = 0.00f;
    this->DamageSource = NULL;
    this->DamageCauser = NULL;
    this->DamageInstigator = NULL;
    this->bKillingBlow = false;
    this->KillReason = EKillReason::Damage;
    this->bSuicide = false;
    this->bBackStab = false;
    this->bEnteredKillVolume = false;
    this->bSwitchedTeamsInLoadoutVolume = false;
    this->bLoseLimbCheat = false;
    this->InventoryItemOverride = NULL;
    this->LocationBasedDamage = ELocationBasedDamage::UpperBody;
}

