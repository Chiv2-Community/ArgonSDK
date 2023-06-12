#include "StandardDamage.h"

UStandardDamage::UStandardDamage() {
    this->BaseDamage = 0.00f;
    this->DamageType = NULL;
    this->AttackType = NULL;
    this->ItemClass = NULL;
    this->DamageProperty = EDamageProperty::Damage;
}

