#include "ReplicationDebugInfo.h"

FReplicationDebugInfo::FReplicationDebugInfo() {
    this->NetDriverTime = 0.00f;
    this->LastNeedsReplicationTime = 0.00f;
    this->NeedsReplicationCount = 0;
    this->MoveSameLocationCount = 0;
    this->MoveSameVelocityCount = 0;
    this->MaxTimeCount = 0;
    this->ReplicationKeyChangeCount = 0;
    this->MoveCheckCount = 0;
}

