#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "ESpawnWaveState.h"
#include "PossessedCharacterDelegate.h"
#include "SpawnWaveSounds.h"
#include "SpawnWaveSpawnedCharacterDelegate.h"
#include "TBLActor.h"
#include "Templates/SubclassOf.h"
#include "WaveFilledDelegate.h"
#include "WaveFinishedDelegate.h"
#include "WaveSpawningDelegate.h"
#include "SpawnWave.generated.h"

class AController;
class APawn;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerController;
class ATBLPlayerState;
class ULoadoutSelection;
class USceneComponent;
class USpecialSpawnSpec;
class UTexture2D;

UCLASS(Blueprintable)
class ASpawnWave : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AController*> JoinedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplJoinedPlayers, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerState*> ReplJoinedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AController*> RejectedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingDeferredSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPendingDeferredSpawnRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AController*> PlayersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SecondsBeforeSpawningStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraSecondsBeforeSpawningToSpawnBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SecondsJoinableAfterSpawningStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bFireWhenFilled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForcedSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumWaitTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaveState, meta=(AllowPrivateAccess=true))
    ESpawnWaveState WaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPrivateWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPlayFromHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PrespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForwardSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpecialSpawnSpec> SpecialSpawnSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSpawnWaveSounds SpawnWaveSounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWaveFinished OnWaveNoLongerJoinable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWaveFinished OnWaveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWaveFilled OnWaveFilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWaveSpawning OnWaveSpawning;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpawnWaveSpawnedCharacter OnSpawnedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPossessedCharacter OnPossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsEndAfterControlReturned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AController*> HistoryOfJoinedPlayers;
    
public:
    ASpawnWave();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartPrespawning();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCleanupTimer(bool bRestart);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnController(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSpawnPrompt();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNoLongerJoinable();
    
    UFUNCTION(BlueprintCallable)
    void SetClientJoinTime(float InClientJoinWorldTime);
    
    UFUNCTION(BlueprintCallable)
    void ReportSpawnFailure(AController* Controller, const FName& Reason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RejectSpawn(AController* Controller);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Public_StartSpawning();
    
    UFUNCTION(BlueprintCallable)
    void ProcessInitiallySpawnedCharacters(ASpawner* InstigatorSpawner, const TArray<ATBLCharacter*>& Characters);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaveState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplJoinedPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerPossessedPawn(APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPendingDeferredSpawnPerformed();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPendingDeferredSpawn();
    
    UFUNCTION(BlueprintCallable)
    bool NeedsCleanup() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool LeaveSpawn(AController* Controller);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool JoinSpawn(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialSpawn();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInSpawnWave(ATBLPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinableBy(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool HasPendingDeferredSpawnsRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleNoLongerJoinable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeLeft(AController* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfJoinedPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplayInfo(TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>>& AllowedClasses, UTexture2D*& SpawnWaveIcon, FText& SpawnWaveName, bool& SpawnWithHorse);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ULoadoutSelection> GetAllowedLoadoutSelection(TSubclassOf<ATBLCharacter> RequestedClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<ATBLCharacter>> GetAllowedCharacterClasses(ATBLPlayerController* TargetController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FireEarly();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void AttemptCleanup();
    
    UFUNCTION(BlueprintCallable)
    void AllowFullPlayerControl();
    
};

