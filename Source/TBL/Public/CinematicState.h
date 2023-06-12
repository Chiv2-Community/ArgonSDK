#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AttackInfo.h"
#include "ECinematicGameState.h"
#include "EKillReason.h"
#include "CinematicState.generated.h"

class AActor;
class APawn;
class ASpawnWave;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerController;
class ATBLTeam;
class UCinematicsComponent;
class UCombatState;

UCLASS(Blueprintable)
class UCinematicState : public UObject {
    GENERATED_BODY()
public:
    UCinematicState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUIStateChanged(FGameplayTag UIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTeamChanged(ATBLTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSuicideNotify(EKillReason KillReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePossessedPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePendingSpawn(ASpawner* PendingSpawner, float ServerSpawnTimeSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNextSpawnWaveChanged(ASpawnWave* SpawnWave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNextSpawnTeamChanged(ATBLTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchStateChanged(FName MatchState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGoingToSpawnAtSpawner(ASpawner* Spawner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCharacterAllowControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacter* GetTBLCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicsComponent* GetCinematicsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndState(FGameplayTag NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginState(FGameplayTag PreviousState);
    
};

