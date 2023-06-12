#include "DeathRecapEntry.h"

FDeathRecapEntry::FDeathRecapEntry() {
    this->Killer = NULL;
    this->KillerType = EKillerType::Killer;
    this->KillingBlowItem = NULL;
    this->bWasDowned = false;
}

