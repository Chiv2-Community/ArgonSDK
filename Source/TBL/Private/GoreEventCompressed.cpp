#include "GoreEventCompressed.h"

FGoreEventCompressed::FGoreEventCompressed() {
    this->BoneNameIndex = 0;
    this->HeadGoreAction = EHeadGoreAction::DoNothing;
    this->LimbGoreAction = ELimbGoreAction::DoNothing;
    this->bSpawnedItem = false;
    this->bKillingBlow = false;
}

