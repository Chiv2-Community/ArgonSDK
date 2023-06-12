#include "PlayerSpawnPair.h"

FPlayerSpawnPair::FPlayerSpawnPair() {
    this->PlayerController = NULL;
    this->RespawnRequestTime = 0.00f;
    this->AssignedMinimumRespawnTime = 0.00f;
}

