#include "TBLOnlineAccount.h"

FTBLOnlineAccount::FTBLOnlineAccount() {
    this->Level = 0;
    this->Title = NULL;
    this->bLoaded = false;
    this->TotalOutstandingRequests = 0;
    this->bDidQueryUserInfo = false;
    this->PlayerState = NULL;
}

