#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EFaction.h"
#include "PossessedCharacterDelegate.h"
#include "SpawnComponentData.h"
#include "SpawnScoreData.h"
#include "SpawnScoringConfig.h"
#include "SpawnWaveParamOverrides.h"
#include "SpawnerSpawnReservation.h"
#include "SpawnerSpawnedCharacterDelegate.h"
#include "SpawningEndedDelegate.h"
#include "SpawningStartedDelegate.h"
#include "Templates/SubclassOf.h"
#include "Spawner.generated.h"

class AController;
class AForcedRespawnSpawnWave;
class AForwardSpawnWave;
class AInventoryItem;
class APawn;
class ASpawnWave;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerController;
class UCarryableSpawnSpec;
class URandomCarryableSpawnLoadout;
class USceneComponent;
class USpawnLocationComponent;
class USpawnerScoreMethod;
class USpecialSpawnSpec;

UCLASS(Abstract, Blueprintable)
class ASpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnWaveParamOverrides SpawnWaveParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawningStarted OnSpawningStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawningEnded OnSpawningEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerSpawnedCharacter OnSpawnerSpawnedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPossessedCharacter OnSpawnerPossessedCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeSpawningStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpecialSpawnSpec> SpecialSpawnSpecOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeVulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipLocationValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerSpawnReservation> SpawnReservations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextReservationToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnLocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> SpawnedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> PendingPossessCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RowSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColumnSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnScoringConfig SpawningConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeFrontmost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RowOffsetPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnerScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostSpawnPossesionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartingSpawnerTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPawnOverlapTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInvalidSpawnLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnWave* SpawnWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPossessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaveLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChildSpawner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASpawner> LastKnownParentSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviousWaveControlRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnWave* PendingSpawnWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpawnLocationComponent*> SpawnComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnComponentData> SpawnComponentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaction, FSpawnScoreData> SpawnerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpawnerScoreMethod> SpawnerScoreMethodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCarryableSpawnSpec>, int32> SpawnedSpecialCarryableSpawnSpecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URandomCarryableSpawnLoadout* RandomCarryableLoadout;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AController>, TSubclassOf<AInventoryItem>> EquippedCarryablesByController;
    
public:
    ASpawner();
    UFUNCTION(BlueprintCallable)
    ASpawnWave* StartSpawning(EFaction Faction, const FSpawnWaveParamOverrides& InSpawnWaveParams);
    
    UFUNCTION(BlueprintCallable)
    AForwardSpawnWave* StartForwardSpawning(const TArray<APawn*>& PawnsAllowedToSpawn, const FSpawnWaveParamOverrides& InSpawnWaveParams);
    
    UFUNCTION(BlueprintCallable)
    AForcedRespawnSpawnWave* StartForcedSpawning(AController* SpawnController, const FSpawnWaveParamOverrides& InSpawnWaveParams);
    
    UFUNCTION(BlueprintCallable)
    ATBLCharacter* SpawnCharacter(const FTransform& SpawnTransform, TSubclassOf<ATBLCharacter> Class, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetupComponentsArray();
    
    UFUNCTION(BlueprintCallable)
    void RequestSpawnQueueSlot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestSpawnerScoreUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideNextSpawnWaveSpecialSpawnSpec(TSubclassOf<USpecialSpawnSpec> NewSpecialSpawnSpec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawningCharacter(const FTransform& SpawningTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedCharacter(ATBLCharacter* NewCharacter, USceneComponent* SpawnComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessedCharacter(ATBLCharacter* Character, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void LockingWaveDestroyed(AActor* DestroyedSpawnWave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaveLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSpawnLocation(const FTransform& OutTransform, TSubclassOf<APawn> PawnClass) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 IsThereAPlayerTooClose(EFaction Faction, int32 LocationIndex, bool bIsSpawningIn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildSpawner() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCustomizationJobsEmptied();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAddedReservation(const FSpawnerSpawnReservation& Reservation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpawnWave* GetSpawnWave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetSpawnLocationAndComponent(int32 Index, FTransform& OutTransform, float& SpawnRadius, float& SpawnHalfHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpawnerScoreForFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnerScoreForAllPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ATBLCharacter*> GetSpawnedCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingReservations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetMinPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetMaxPlayerCount() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetEquippedCarryableForController(AController* Controller);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateSpawnComponents();
    
    UFUNCTION(BlueprintCallable)
    void ConditionalStopSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cinematics_StartAllowingControl(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cinematics_ControllerPossessedPawn(ATBLPlayerController* Controller, ATBLCharacter* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cinematics_BecameNextSpawner(ATBLPlayerController* Controller);
    
private:
    UFUNCTION(BlueprintCallable)
    void ActualStopSpawning();
    
};

