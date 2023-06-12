#include "CumulativePlayerSpawnPair.h"

FCumulativePlayerSpawnPair::FCumulativePlayerSpawnPair() {
    this->PlayerController = NULL;
    this->CurrentRespawnTime = 0.00f;
    this->RespawnWorldTime = 0.00f;
}

