#include "AddRandomItemDrop.h"

UAddRandomItemDrop::UAddRandomItemDrop() {
    this->DropTable = NULL;
    this->AppId = -1;
    this->ItemUnlockType = EOnlineItemUnlockType::GrantedByProgression;
    this->Quantity = 1;
}

