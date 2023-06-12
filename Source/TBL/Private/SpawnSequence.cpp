#include "SpawnSequence.h"

void ASpawnSequence::StartNextWave() {
}

void ASpawnSequence::SetSpawnerList(const TArray<ASpawner*>& SpawnerList) {
}

void ASpawnSequence::SetSecondsBetweenWaves(float InSecondsBetweenWaves) {
}

void ASpawnSequence::RemoveSpawner(ASpawner* Spawner) {
}

void ASpawnSequence::PushSpawner(ASpawner* Spawner) {
}

void ASpawnSequence::Initialize(FSpawnSequenceProperties Properties) {
}

void ASpawnSequence::HandleSpawnWaveNotJoinable(ASpawnWave* SpawnWave) {
}

void ASpawnSequence::HandleSpawnWaveDestroyed(AActor* SpawnWave) {
}

void ASpawnSequence::ForceSpawnController(AController* Controller) {
}

void ASpawnSequence::EmptySpawnerList() {
}

void ASpawnSequence::Deactivate() {
}

void ASpawnSequence::AddSpawner(ASpawner* Spawner) {
}

void ASpawnSequence::ActivateDeactivate(ESpawnSequenceActivateDeactivateAction Action) {
}

bool ASpawnSequence::Activate() {
    return false;
}

ASpawnSequence::ASpawnSequence() {
    this->bIsActive = false;
    this->CurrentIndex = 0;
    this->Faction = EFaction::Agatha;
    this->SimultaneousWaves = 2;
    this->SecondsBetweenWaves = 7.50f;
    this->bOverrideWaveTimingToHalfOfSecondsBetweenWaves = true;
    this->bAlwaysKeepOneWaveActive = true;
    this->bLoop = true;
    this->bFastFirstSpawn = true;
    this->SecondsBetweenWavesPlayerCountBonus = NULL;
    this->MaxPlayersPlayerCountBonus = NULL;
}

