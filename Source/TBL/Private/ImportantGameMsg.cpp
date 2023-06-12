#include "ImportantGameMsg.h"

FImportantGameMsg::FImportantGameMsg() {
    this->MessageStartTime = 0.00f;
    this->MessageExpiryTime = 0.00f;
    this->UniqueMessageId = 0;
    this->bDoesNotExpire = false;
}

