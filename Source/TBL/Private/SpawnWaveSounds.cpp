#include "SpawnWaveSounds.h"

FSpawnWaveSounds::FSpawnWaveSounds() {
    this->ActiveSound = NULL;
    this->JoinConfirmationSound = NULL;
    this->JoinDenySound = NULL;
    this->UnavailableSound = NULL;
    this->PreparingToSpawnSound = NULL;
    this->SpawningHasStartedSound = NULL;
    this->BroadcastSpawningHasStartedSound = NULL;
    this->SpawnStartedFaction = EFaction::Agatha;
}

