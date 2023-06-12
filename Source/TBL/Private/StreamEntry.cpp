#include "StreamEntry.h"

FStreamEntry::FStreamEntry() {
    this->SizeInBytes = 0;
    this->LengthInMS = 0;
    this->NumViewers = 0;
    this->bIsLive = false;
    this->Changelist = 0;
}

