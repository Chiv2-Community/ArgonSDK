#include "AnimDamageParams.h"

FAnimDamageParams::FAnimDamageParams() {
    this->Damage = 0.00f;
    this->ApplyCondition = EConditionType::None;
    this->InventoryItem = NULL;
    this->DamageCauser = NULL;
}

