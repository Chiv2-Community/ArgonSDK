#include "SpawnSequenceProperties.h"

FSpawnSequenceProperties::FSpawnSequenceProperties() {
    this->Faction = EFaction::Agatha;
    this->SimultaneousWaves = 0;
    this->SecondsBetweenWaves = 0.00f;
    this->bOverrideWaveTimingToHalfOfSecondsBetweenWaves = false;
    this->bAlwaysKeepOneWaveActive = false;
    this->bLoop = false;
    this->bFastFirstSpawn = false;
    this->SecondsBetweenWavesPlayerCountBonus = NULL;
    this->MaxPlayersPlayerCountBonus = NULL;
}

