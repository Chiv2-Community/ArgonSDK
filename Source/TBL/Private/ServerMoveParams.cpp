#include "ServerMoveParams.h"

FServerMoveParams::FServerMoveParams() {
    this->Timestamp = 0.00f;
    this->ClientMovementBase = NULL;
    this->ClientMovementMode = 0;
    this->bServerScopedMoveOptimization = false;
}

