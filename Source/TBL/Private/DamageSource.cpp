#include "DamageSource.h"

UDamageSource::UDamageSource() {
    this->ArmourPenetration = 0.00f;
    this->BonusStaminaDamagePercentage = 0.00f;
    this->bDoesSiegeDamage = false;
    this->FriendlyFirePercent = 100.00f;
    this->FriendlyFireCanInterrupt = true;
}

