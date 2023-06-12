#include "GroupSpawner.h"

AGroupSpawner::AGroupSpawner() {
    this->SpawnerSelectionMode = ESpawnerSelectionMode::SequentialFill;
    this->SpawnerSelectionIndex = -1;
    this->bHasPerformedRefill = false;
}

