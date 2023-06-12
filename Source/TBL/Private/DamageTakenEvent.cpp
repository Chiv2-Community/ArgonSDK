#include "DamageTakenEvent.h"

FDamageTakenEvent::FDamageTakenEvent() {
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
    this->bSwitchedTeamsInLoadoutVolume = false;
    this->AbilitySpec = NULL;
    this->ApplyCondition = EConditionType::None;
    this->InventoryItem = NULL;
    this->Projectile = NULL;
    this->LocationBasedDamage = ELocationBasedDamage::UpperBody;
    this->AttachParent = NULL;
    this->bParried = false;
    this->CharacterWhoParried = NULL;
    this->bIsInTeamThwackRange = false;
    this->KillReason = EKillReason::Damage;
    this->bArrowParried = false;
    this->bDisarmed = false;
}

