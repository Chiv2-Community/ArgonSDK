#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AIEventLog.h"
#include "AIPersonality.h"
#include "AIPossessedPawnSignatureDelegate.h"
#include "AIUsingInteractableDelegate.h"
#include "EAudioPersonalityType.h"
#include "OnFailedToSpawnDelegate.h"
#include "OnPawnPendingDestroyDelegate.h"
#include "OnStartedBehaviorTreeDelegate.h"
#include "TBLAIController.generated.h"

class AAIPlayerStart;
class AActor;
class AController;
class APawn;
class ATBLPlayerController;
class UAIControlHandler;
class UBehaviorTree;
class UDataTable;
class UInputReplayComponent;
class UInteractableComponent;
class UUtilityAI_DecisionMaker;

UCLASS(Blueprintable)
class ATBLAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputReplayComponent* InputReplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIControlHandler* ControlHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUtilityAI_DecisionMaker* GeneralDecisionMakerComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPossessedPawnSignature OnPossessedPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnPendingDestroy OnPossessedPawnPendingDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedBehaviorTree OnStartedBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCrowdManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatePlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveToNavMeshTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerController* OverridePlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* CurrentlyUsedInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractableUseBeingHeld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIUsingInteractable OnInteractableStartedToBeHeld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIUsingInteractable OnInteractableUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIUsingInteractable OnInteractableStoppedBeingHeld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnFailedToSpawn OnFailedToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIEventLog> AIEventLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPlayerStart* SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelSpawnedBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerCustomizedBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, int32> NumTimesTargetted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPersonality Personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioPersonalityType::Type>> PossiblePersonalities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PersonalityTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePersonalityRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersonalityRowOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavMeshReturnAttemptCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NavMeshReturnAttemptHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPathingWithMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDummyBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNullBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackfillBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoggedErrorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMaxDistance;
    
public:
    ATBLAIController();
    UFUNCTION(BlueprintCallable)
    void UseInteractable(UInteractableComponent* Interactable, bool bHold);
    
    UFUNCTION(BlueprintCallable)
    void Suicide();
    
    UFUNCTION(BlueprintCallable)
    void StopUsingInteractable();
    
    UFUNCTION(BlueprintCallable)
    void StopReturnToNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetMaxDistance(float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetNullBot(bool bNull);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyBot(bool bDummy);
    
    UFUNCTION(BlueprintCallable)
    void SetBackfillBot(bool bBackfill);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToNavMeshExpired();
    
    UFUNCTION(BlueprintCallable)
    void ResetError(FName ErrorType);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToTargetLocation(FVector Target);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToNavMesh(FVector PathGoal, AActor* PathGoalActor);
    
    UFUNCTION(BlueprintCallable)
    void MoveInput(FVector2D InputDir, float Time, bool bAllowPathing);
    
    UFUNCTION(BlueprintCallable)
    void LogEvent(FName EventName, AActor* Target, const FString& DebugStr);
    
    UFUNCTION(BlueprintCallable)
    void LogError(FName ErrorType, const FString& Message, bool bError);
    
    UFUNCTION(BlueprintCallable)
    void Jump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelSpawnedBot();
    
    UFUNCTION(BlueprintCallable)
    bool IsDummyBot() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBackfillBot();
    
    UFUNCTION(BlueprintCallable)
    void GiveWeapon(FName Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetMaxDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget();
    
    UFUNCTION(BlueprintCallable)
    void Dismount();
    
    UFUNCTION(BlueprintCallable)
    static void DestroyControllerAndPawn(AController* Controller, APawn* TargetPawn);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyController(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool CanPathFollow() const;
    
    UFUNCTION(BlueprintCallable)
    void AttemptReturnToNavMesh();
    
};

