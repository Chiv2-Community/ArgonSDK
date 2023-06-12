#include "OwnershipResponse.h"

FOwnershipResponse::FOwnershipResponse() {
    this->Owned = false;
    this->Crowns = 0;
    this->Gold = 0;
    this->USDCents = 0;
    this->LevelType = EOnlineStat::Invalid;
    this->Level = 0;
}

