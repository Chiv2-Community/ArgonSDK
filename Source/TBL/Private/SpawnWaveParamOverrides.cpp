#include "SpawnWaveParamOverrides.h"

FSpawnWaveParamOverrides::FSpawnWaveParamOverrides() {
    this->SpecialSpawnSpec = NULL;
    this->SpecialRandomCarryableLoadout = NULL;
    this->bOverrideSecondsBeforeSpawningStarts = false;
    this->SecondsBeforeSpawningStarts = 0.00f;
    this->bOverrideSecondsJoinableAfterSpawningStarts = false;
    this->SecondsJoinableAfterSpawningStarts = 0.00f;
    this->bOverrideMaxPlayerCount = false;
    this->MaxPlayerCount = 0;
    this->bOverrideFireWhenFilled = false;
    this->bFireWhenFilled = false;
    this->bOverrideMinimumWaitTimeSeconds = false;
    this->MinimumWaitTimeSeconds = 0.00f;
    this->bOverrideForcedSpawn = false;
    this->bForcedSpawn = false;
    this->bOverrideAllowBots = false;
    this->bAllowBots = false;
    this->bOverridePrespawn = false;
    this->bPrespawn = false;
    this->bOverridePrespawnTime = false;
    this->PrespawnTime = 0.00f;
    this->bIsPlayFromHere = false;
    this->bOverrideFaction = false;
    this->Faction = EFaction::Agatha;
    this->bStartPlayersInRestrictedState = false;
    this->bPrivateWave = false;
    this->bOverrideSpawnWaveSounds = false;
    this->bForwardSpawn = false;
}

