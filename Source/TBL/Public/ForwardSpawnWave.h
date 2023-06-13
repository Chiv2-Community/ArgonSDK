#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DamageTakenEvent.h"
#include "ParryEventState.h"
#include "SpawnWave.h"
#include "ForwardSpawnWave.generated.h"

class AController;
class APawn;
class ATBLCharacter;

UCLASS(Blueprintable)
class AForwardSpawnWave : public ASpawnWave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AController>, FTimerHandle> ControllerTimerMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AController>, FTimerHandle> ControllerCombatTimerMap;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPROPERTY()
    TSet<TWeakObjectPtr<AController>> ControllerAwaitingCombatTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnsAllowedToForwardSpawn, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsAllowedToForwardSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APawn*> AllowedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APawn*> RejectedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatTimerDuration;
    
public:
    AForwardSpawnWave();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnOutOfCombatCharacters();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldResetCombatTimerFor(AController* Controller) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPawnsAllowedToForwardSpawn(TArray<APawn*> InPawnsAllowedToForwardSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SetAwaitingCombatTimer(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCombatTimerFor(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnsAllowedToForwardSpawn();
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedPlayerTakeDamage(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedPlayerParryEvent(ATBLCharacter* A, ATBLCharacter* B, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedPlayerCauseDamage(const FDamageTakenEvent& DamageEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsControllerRecentlyInCombat(AController* Controller) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForwardSpawnController(AController* Controller);
    
};

