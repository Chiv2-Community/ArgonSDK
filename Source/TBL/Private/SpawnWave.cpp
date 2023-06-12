#include "SpawnWave.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void ASpawnWave::StartPrespawning() {
}

void ASpawnWave::StartCleanupTimer(bool bRestart) {
}

void ASpawnWave::SpawnController(AController* Controller) {
}

bool ASpawnWave::ShouldShowSpawnPrompt() {
    return false;
}

void ASpawnWave::SetNoLongerJoinable() {
}

void ASpawnWave::SetClientJoinTime(float InClientJoinWorldTime) {
}

void ASpawnWave::ReportSpawnFailure(AController* Controller, const FName& Reason) {
}

bool ASpawnWave::RejectSpawn(AController* Controller) {
    return false;
}

void ASpawnWave::Public_StartSpawning() {
}

void ASpawnWave::ProcessInitiallySpawnedCharacters(ASpawner* InstigatorSpawner, const TArray<ATBLCharacter*>& Characters) {
}

void ASpawnWave::OnRep_WaveState() {
}

void ASpawnWave::OnRep_ReplJoinedPlayers() {
}

void ASpawnWave::OnControllerPossessedPawn(APawn* NewPawn) {
}

void ASpawnWave::NotifyPendingDeferredSpawnPerformed() {
}

void ASpawnWave::NotifyPendingDeferredSpawn() {
}

bool ASpawnWave::NeedsCleanup() const {
    return false;
}

bool ASpawnWave::LeaveSpawn(AController* Controller) {
    return false;
}

bool ASpawnWave::JoinSpawn(AController* Controller) {
    return false;
}

bool ASpawnWave::IsSpecialSpawn() {
    return false;
}

bool ASpawnWave::IsPlayerInSpawnWave(ATBLPlayerState* PS) {
    return false;
}

bool ASpawnWave::IsJoinableBy(AController* Controller) {
    return false;
}

bool ASpawnWave::HasPendingDeferredSpawnsRemaining() const {
    return false;
}

void ASpawnWave::HandleNoLongerJoinable() {
}

float ASpawnWave::GetTimeLeft(AController* Target) const {
    return 0.0f;
}

int32 ASpawnWave::GetNumberOfJoinedPlayers() {
    return 0;
}

void ASpawnWave::GetDisplayInfo(TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>>& AllowedClasses, UTexture2D*& SpawnWaveIcon, FText& SpawnWaveName, bool& SpawnWithHorse) {
}

TSubclassOf<ULoadoutSelection> ASpawnWave::GetAllowedLoadoutSelection(TSubclassOf<ATBLCharacter> RequestedClass) {
    return NULL;
}

TArray<TSubclassOf<ATBLCharacter>> ASpawnWave::GetAllowedCharacterClasses(ATBLPlayerController* TargetController) {
    return TArray<TSubclassOf<ATBLCharacter>>();
}

void ASpawnWave::FireEarly() {
}

void ASpawnWave::End() {
}

void ASpawnWave::AttemptCleanup() {
}

void ASpawnWave::AllowFullPlayerControl() {
}

void ASpawnWave::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnWave, Spawner);
    DOREPLIFETIME(ASpawnWave, Faction);
    DOREPLIFETIME(ASpawnWave, ReplJoinedPlayers);
    DOREPLIFETIME(ASpawnWave, PlayersToSpawn);
    DOREPLIFETIME(ASpawnWave, StartTime);
    DOREPLIFETIME(ASpawnWave, SecondsBeforeSpawningStarts);
    DOREPLIFETIME(ASpawnWave, SecondsJoinableAfterSpawningStarts);
    DOREPLIFETIME(ASpawnWave, MaxPlayerCount);
    DOREPLIFETIME(ASpawnWave, bFireWhenFilled);
    DOREPLIFETIME(ASpawnWave, bForcedSpawn);
    DOREPLIFETIME(ASpawnWave, WaveState);
    DOREPLIFETIME(ASpawnWave, bAllowBots);
    DOREPLIFETIME(ASpawnWave, bPrivateWave);
    DOREPLIFETIME(ASpawnWave, bIsPlayFromHere);
    DOREPLIFETIME(ASpawnWave, PrespawnTime);
    DOREPLIFETIME(ASpawnWave, SpecialSpawnSpec);
    DOREPLIFETIME(ASpawnWave, SpawnWaveSounds);
}

ASpawnWave::ASpawnWave() {
    this->Spawner = NULL;
    this->Faction = EFaction::Agatha;
    this->PendingDeferredSpawnCount = 0;
    this->LastPendingDeferredSpawnRequest = -1.00f;
    this->StartTime = -1.00f;
    this->SecondsBeforeSpawningStarts = 15.00f;
    this->ExtraSecondsBeforeSpawningToSpawnBots = 0.00f;
    this->SecondsJoinableAfterSpawningStarts = 2.00f;
    this->MaxPlayerCount = 0;
    this->bFireWhenFilled = true;
    this->bForcedSpawn = false;
    this->MinimumWaitTimeSeconds = 2.00f;
    this->WaveState = ESpawnWaveState::EWaveState_NotStarted;
    this->bAllowBots = true;
    this->bPrivateWave = false;
    this->bIsPlayFromHere = false;
    this->bPrespawn = false;
    this->PrespawnTime = 0.00f;
    this->bForwardSpawn = false;
    this->SpecialSpawnSpec = NULL;
    this->bControlRestricted = false;
    this->bWantsEndAfterControlReturned = false;
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

