#include "ItemTableRewardByAppId.h"

UItemTableRewardByAppId::UItemTableRewardByAppId() {
    this->bMarketable = false;
    this->bTradeable = false;
    this->AppId = 0;
    this->ItemUnlockType = EOnlineItemUnlockType::GrantedByProgression;
}

