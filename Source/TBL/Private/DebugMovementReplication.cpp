#include "DebugMovementReplication.h"

FDebugMovementReplication::FDebugMovementReplication() {
    this->FastSharedCount = 0;
    this->FastSharedFrame = 0;
    this->FastSharedServerFrame = 0;
    this->FastSharedOutOfOrder = 0;
    this->FastSharedOutOfOrderFrame = 0;
    this->ReplicatedMovementFrame = 0;
    this->ReplicatedMovementCount = 0;
}

