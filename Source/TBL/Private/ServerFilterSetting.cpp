#include "ServerFilterSetting.h"

FServerFilterSetting::FServerFilterSetting() {
    this->bUsePingLimit = false;
    this->PingLimit = 0;
    this->bUseServerNameFilter = false;
    this->bUseFreeSlotLimit = false;
    this->FreeSlotLimit = 0;
    this->bHideEmpty = false;
    this->bHideFull = false;
    this->bHideLocked = false;
    this->bHideUnjoinableOfficials = false;
    this->bHideCommunityServers = false;
}

