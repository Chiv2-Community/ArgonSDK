#include "SyncMovementAction.h"

FSyncMovementAction::FSyncMovementAction() {
    this->Type = ESyncMovementType::Invalid;
    this->QueuedId = 0;
    this->ClientTimeStamp = 0.00f;
}

