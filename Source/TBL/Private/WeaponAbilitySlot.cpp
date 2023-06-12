#include "WeaponAbilitySlot.h"

FWeaponAbilitySlot::FWeaponAbilitySlot() {
    this->Condition = EInventoryItemCondition::NoCondition;
    this->Priority = 0;
    this->bEnableSwingWind = false;
    this->bUseBothTracers = false;
    this->bIsMultiAttack = false;
    this->AbilitySpec = NULL;
    this->InventoryItem = NULL;
    this->AttackType = NULL;
}

