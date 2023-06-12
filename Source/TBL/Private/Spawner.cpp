#include "Spawner.h"
#include "SpawnerScoreMethod.h"
#include "Templates/SubclassOf.h"

ASpawnWave* ASpawner::StartSpawning(EFaction Faction, const FSpawnWaveParamOverrides& InSpawnWaveParams) {
    return NULL;
}

AForwardSpawnWave* ASpawner::StartForwardSpawning(const TArray<APawn*>& PawnsAllowedToSpawn, const FSpawnWaveParamOverrides& InSpawnWaveParams) {
    return NULL;
}

AForcedRespawnSpawnWave* ASpawner::StartForcedSpawning(AController* SpawnController, const FSpawnWaveParamOverrides& InSpawnWaveParams) {
    return NULL;
}

ATBLCharacter* ASpawner::SpawnCharacter(const FTransform& SpawnTransform, TSubclassOf<ATBLCharacter> Class, AController* Controller) {
    return NULL;
}

void ASpawner::SetupComponentsArray() {
}

void ASpawner::RequestSpawnQueueSlot() {
}

void ASpawner::RequestSpawnerScoreUpdate() {
}

void ASpawner::OverrideNextSpawnWaveSpecialSpawnSpec(TSubclassOf<USpecialSpawnSpec> NewSpecialSpawnSpec) {
}




void ASpawner::LockingWaveDestroyed(AActor* DestroyedSpawnWave) {
}

bool ASpawner::IsWaveLocked() const {
    return false;
}

bool ASpawner::IsValidSpawnLocation(const FTransform& OutTransform, TSubclassOf<APawn> PawnClass) const {
    return false;
}

int32 ASpawner::IsThereAPlayerTooClose(EFaction Faction, int32 LocationIndex, bool bIsSpawningIn) const {
    return 0;
}

bool ASpawner::IsPendingLock() const {
    return false;
}

bool ASpawner::IsChildSpawner() const {
    return false;
}

void ASpawner::HandleOnCustomizationJobsEmptied() {
}

void ASpawner::HandleAddedReservation_Implementation(const FSpawnerSpawnReservation& Reservation) {
}

int32 ASpawner::GetTotalReservations() const {
    return 0;
}

ASpawnWave* ASpawner::GetSpawnWave() {
    return NULL;
}

USceneComponent* ASpawner::GetSpawnLocationAndComponent_Implementation(int32 Index, FTransform& OutTransform, float& SpawnRadius, float& SpawnHalfHeight) const {
    return NULL;
}

float ASpawner::GetSpawnerScoreForFaction_Implementation(EFaction Faction) const {
    return 0.0f;
}

float ASpawner::GetSpawnerScoreForAllPlayers() const {
    return 0.0f;
}

TArray<ATBLCharacter*> ASpawner::GetSpawnedCharacters() {
    return TArray<ATBLCharacter*>();
}

int32 ASpawner::GetRemainingReservations() const {
    return 0;
}

int32 ASpawner::GetMinPlayerCount_Implementation() const {
    return 0;
}

int32 ASpawner::GetMaxPlayerCount_Implementation() const {
    return 0;
}

TSubclassOf<AInventoryItem> ASpawner::GetEquippedCarryableForController(AController* Controller) {
    return NULL;
}

void ASpawner::GenerateSpawnComponents() {
}

void ASpawner::ConditionalStopSpawning() {
}

void ASpawner::Cinematics_StartAllowingControl_Implementation(ATBLCharacter* Character) {
}

void ASpawner::Cinematics_ControllerPossessedPawn_Implementation(ATBLPlayerController* Controller, ATBLCharacter* Pawn) {
}


void ASpawner::ActualStopSpawning() {
}

ASpawner::ASpawner() {
    this->DelayBeforeSpawningStops = 2.00f;
    this->SpecialSpawnSpecOverride = NULL;
    this->CameraInterpTime = 0.00f;
    this->TimeBeforeVulnerable = 1.00f;
    this->MinimumVulnerabilityTime = 0.50f;
    this->bSkipLocationValidation = false;
    this->NextReservationToSpawn = 0;
    this->SpawnLocationIndex = 0;
    this->Rows = 2;
    this->Columns = 6;
    this->RowSpacing = 250.00f;
    this->ColumnSpacing = 150.00f;
    this->bPrioritizeFrontmost = true;
    this->SnapToGroundDistance = 400.00f;
    this->RowOffsetPercent = 0.00f;
    this->MinimumPlayerDistance = 600.00f;
    this->SpawnerScoreMultiplier = 1.00f;
    this->LastSpawnTime = -1.00f;
    this->PostSpawnPossesionTime = 2.50f;
    this->bSkipPawnOverlapTest = false;
    this->bAllowInvalidSpawnLocation = false;
    this->SpawnWave = NULL;
    this->bSpawning = false;
    this->bPossessing = false;
    this->bWaveLocked = false;
    this->bChildSpawner = false;
    this->bPreviousWaveControlRestricted = false;
    this->bPendingLock = false;
    this->PendingSpawnWave = NULL;
    this->SpawnerScoreMethodClass = USpawnerScoreMethod::StaticClass();
    this->RandomCarryableLoadout = NULL;
}

