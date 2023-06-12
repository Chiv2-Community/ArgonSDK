#include "ServerTrapEventParams.h"

FServerTrapEventParams::FServerTrapEventParams() {
    this->Result = ETrapEventResult::None;
    this->TrapObject = NULL;
    this->ClientTimeStamp = 0.00f;
}

