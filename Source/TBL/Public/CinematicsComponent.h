#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttackInfo.h"
#include "CinematicStateChangedDelegate.h"
#include "ECinematicGameState.h"
#include "EKillReason.h"
#include "CinematicsComponent.generated.h"

class AActor;
class APawn;
class APlayerState;
class ASpawnWave;
class ASpawner;
class ATBLTeam;
class UCinematicAnimationRemapping;
class UCinematicState;
class UCombatState;
class UCombatStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UCinematicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UCinematicState>> DefaultStates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCinematicStateChanged OnCinematicStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UCinematicState*> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCinematicAnimationRemapping> CinematicAnimationRemappingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCinematicAnimationRemapping* CinematicAnimationRemapping;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatStateComponent> PreviousCombatStateComponent;
    
public:
    UCinematicsComponent();
    UFUNCTION(BlueprintCallable)
    void SetUIState(FGameplayTag UIState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInState(FGameplayTag State) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeamChanged(ATBLTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void HandleSuicideNotify(EKillReason KillReason);
    
    UFUNCTION(BlueprintCallable)
    void HandlePossessedPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandlePendingSpawn(ASpawner* PendingSpawner, float ServerSpawnTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void HandleNextSpawnWaveChanged(ASpawnWave* SpawnWave);
    
    UFUNCTION(BlueprintCallable)
    void HandleNextSpawnTeamChanged(ATBLTeam* NewTeam);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleMatchStateChanged(FName MatchState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGoingToSpawnAtSpawner(ASpawner* Spawner);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoState(FGameplayTag NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicState* GetState(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentUIState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentStateTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicState* GetCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void BindToPlayerState(APlayerState* PlayerState);
    
};

