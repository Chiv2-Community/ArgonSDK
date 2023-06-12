#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AutorunParams.h"
#include "CharacterControlInstance.h"
#include "CharacterControlOverTime.h"
#include "CombatStateCancelAttack.h"
#include "CombatStateChargeStab.h"
#include "CombatStateFire.h"
#include "CombatStateGetUp.h"
#include "CombatStateHeavyAttack.h"
#include "CombatStateReleaseStab.h"
#include "CombatStateStartAttack.h"
#include "DebugMovementAction.h"
#include "DebugVelocityGraphEntry.h"
#include "DelayStartForcedAutorun.h"
#include "DisableAttackRootMotion.h"
#include "EAutorunMovementMode.h"
#include "EStartMovementResult.h"
#include "HorseToHorseBump.h"
#include "HorseToWorldBump.h"
#include "InitialAutorunExpiredSignatureDelegate.h"
#include "ManualReload.h"
#include "MountLadder.h"
#include "MovementActionFinishedDelegate.h"
#include "MovementActionInitiationParams.h"
#include "MovementActionStartedDelegate.h"
#include "MovementMetrics.h"
#include "PlayLadderAnimation.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "Replicated_FAutorunParams.h"
#include "Replicated_FMovementAnimationEvent.h"
#include "ServerCorrection.h"
#include "ServerHitWorldParams.h"
#include "ServerInitiateAbilityParams.h"
#include "ServerMoveParams.h"
#include "ServerTrapEventParams.h"
#include "SyncMovementAction.h"
#include "SyncSpawnAnimationParams.h"
#include "SyncStartMovementParams.h"
#include "TBLCharacterMovementBaseComponent.generated.h"

class ATBLCharacterBase;
class UMovementInstance;
class UMovementSequence;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLCharacterMovementBaseComponent : public UCharacterMovementComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementActionStarted OnMovementActionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementActionFinished OnMovementActionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitialAutorunExpiredSignature OnInitialAutorunExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomOfCapsuleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSequenceStepUpX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSequenceStepUpZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MasterTransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementMetrics MovementMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreCorrectionLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementInstance* ActiveMovementAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugMovementAction> LogPreviousMovements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStartMovementResult::Type> LastStartMovementResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* LastMovementSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSyncStartMovementParams> SyncStartMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FAutorunParams> SyncForcedAutorunParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, EAutorunMovementMode> SyncAutorunMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSyncSpawnAnimationParams> SyncSpawnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FServerInitiateAbilityParams> SyncInitiateAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FServerHitWorldParams> SyncHitWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FServerTrapEventParams> SyncTrapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateStartAttack> SyncStartAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateHeavyAttack> SyncStartHeavyAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateFire> SyncStartFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateCancelAttack> SyncCancelAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateChargeStab> SyncChargeStab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateReleaseStab> SyncReleaseStab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FCombatStateGetUp> SyncGetUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FManualReload> SyncManualReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FDisableAttackRootMotion> SyncDisableAttackRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FPlayLadderAnimation> SyncPlayLadderAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FMountLadder> SyncMountLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FHorseToHorseBump> SyncHorseToHorseBump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FHorseToWorldBump> SyncHorseToWorldBump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncMovementAction> SyncMovementActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSyncMovementAction> SyncPreMovementActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextSyncMovementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSyncMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterControlInstance> CharacterControlInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterControlInstance CurrentCharacterControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterControlOverTime> CharacterControlOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterControlInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeDiscrepancyDetectedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenDiscrepancyDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayStartForcedAutorun DelayStartForcedAutorun;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bAllowPositionError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUpdatedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat LastUpdatedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FServerCorrection> LastServerCorrections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastCorrectionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat LastCorrectionRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementAnimationEvent, meta=(AllowPrivateAccess=true))
    FReplicated_FMovementAnimationEvent MovementAnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AutorunParams, meta=(AllowPrivateAccess=true))
    FReplicated_FAutorunParams AutorunParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutorunParams LastAutorunParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockIntoForcedAutorun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingEndForcedAutorun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutorunStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialAutorunHorizontalLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAutorunExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InitialAutorunTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutorunInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoStopAutorunHorizontalLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NoStopAutorunTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInNoStopAutorun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugVelocityGraphEntry> DebugVelocityGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerMoveParams ServerMoveParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OccupiedNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NavAreaUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ForcedMoveTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForcedMoveDirection;
    
public:
    UTBLCharacterMovementBaseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetAllowPositionError(bool InAllowPositionError);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAckMovement(uint8 SyncMovementId, float ClientTimeStamp);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementAnimationEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AutorunParams();
    
    UFUNCTION(BlueprintCallable)
    void OnAutorunParamsChanged();
    
    UFUNCTION(BlueprintCallable)
    void NoStopAutorunExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockForcedAutorun(bool bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialAutorun() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitialAutorunExpired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovementAction(UMovementSequence* Sequence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementMode> GetMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutorunStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidHitBottomOfCapsule(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopForcedAutorun(uint8 SyncMovementId);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartMovement(const FMovementActionInitiationParams& InitParams, uint8 SyncMovementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartForcedAutorun(const FAutorunParams& Params, uint8 SyncMovementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetAutorunMovementMode(EAutorunMovementMode InMovementMode, uint8 SyncMovementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCinematicRestrictControl(uint8 SyncMovementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCinematicAllowControl(uint8 SyncMovementId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStopMovement(UMovementSequence* Sequence, bool bExecuteClientFirst);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStartMovement(const FMovementActionInitiationParams& InitParams);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSetDowned(bool bDowned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPlaySpawnAnimation(FName Animation);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityStopForcedAutorun();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthoritySetAutorunMovementMode(EAutorunMovementMode InMovementMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityForceAutorun(const FAutorunParams& Params, ATBLCharacterBase* Leader);
    
    
    // Fix for true pure virtual functions not being implemented
};

