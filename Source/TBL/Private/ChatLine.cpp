#include "ChatLine.h"

FChatLine::FChatLine() {
    this->ChatType = EChatType::AllSay;
    this->MaxChatType = EChatType::AllSay;
    this->IsSenderDev = false;
}

