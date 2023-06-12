#include "DamageTakenEventCompressed.h"

FDamageTakenEventCompressed::FDamageTakenEventCompressed() {
    this->AbilitySpec = NULL;
    this->Damage = 0.00f;
    this->NewStatValue = 0.00f;
    this->DamageSource = NULL;
    this->DamageCauser = NULL;
    this->DamageTaker = NULL;
    this->DamageInstigator = NULL;
    this->bKillingBlow = false;
    this->bSuicide = false;
    this->bBackStab = false;
    this->bEnteredKillVolume = false;
    this->bLoseLimbCheat = false;
    this->bOverrideImpactPoint = false;
    this->BoneNameIndex = 0;
    this->HitComponent = NULL;
    this->DamageTakerCombatStateIndex = 0;
    this->InventoryItem = NULL;
    this->ApplyCondition = EConditionType::None;
    this->Projectile = NULL;
    this->LocationBasedDamage = ELocationBasedDamage::UpperBody;
    this->AttachParent = NULL;
    this->bArrowParried = false;
    this->bDisarmed = false;
}

