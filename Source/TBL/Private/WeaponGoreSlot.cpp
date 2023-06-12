#include "WeaponGoreSlot.h"

FWeaponGoreSlot::FWeaponGoreSlot() {
    this->HeadGoreAction = EHeadGoreAction::DoNothing;
    this->LimbGoreAction = ELimbGoreAction::DoNothing;
    this->HelmetRemovalPolicy = EHelmetRemovalPolicy::DoNothing;
}

