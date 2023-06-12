#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFaction.h"
#include "ESpawnSequenceActivateDeactivateAction.h"
#include "SequenceFinishedDelegate.h"
#include "SpawnSequenceProperties.h"
#include "SpawnWaveParamOverrides.h"
#include "SpawnSequence.generated.h"

class AController;
class ASpawnWave;
class ASpawner;
class UCurveFloat;

UCLASS(Blueprintable)
class ASpawnSequence : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawner*> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawner*> SpawnerQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawner*> PushedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimultaneousWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsBetweenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWaveTimingToHalfOfSecondsBetweenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysKeepOneWaveActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastFirstSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SecondsBetweenWavesPlayerCountBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxPlayersPlayerCountBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnWaveParamOverrides SpawnWaveParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceFinished OnSequenceFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ASpawnWave*> ActiveWaves;
    
public:
    ASpawnSequence();
private:
    UFUNCTION(BlueprintCallable)
    void StartNextWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpawnerList(const TArray<ASpawner*>& SpawnerList);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondsBetweenWaves(float InSecondsBetweenWaves);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawner(ASpawner* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void PushSpawner(ASpawner* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(FSpawnSequenceProperties Properties);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSpawnWaveNotJoinable(ASpawnWave* SpawnWave);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpawnWaveDestroyed(AActor* SpawnWave);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceSpawnController(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void EmptySpawnerList();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void AddSpawner(ASpawner* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDeactivate(ESpawnSequenceActivateDeactivateAction Action);
    
    UFUNCTION(BlueprintCallable)
    bool Activate();
    
};

