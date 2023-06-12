#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AnimationTiming.h"
#include "AttackInfo.h"
#include "CombatStateBeginDelegate.h"
#include "CombatStateCancelAttack.h"
#include "CombatStateChangedDelegate.h"
#include "CombatStateChargeStab.h"
#include "CombatStateEndDelegate.h"
#include "CombatStateEventDelegate.h"
#include "CombatStateFire.h"
#include "CombatStateGetUp.h"
#include "CombatStateHeavyAttack.h"
#include "CombatStateInfo.h"
#include "CombatStateReleaseStab.h"
#include "CombatStateStartAttack.h"
#include "CrowdControlNoDamageDelegate.h"
#include "CrowdControlParams.h"
#include "DamageTakenEvent.h"
#include "DelayedQueueHeldInputs.h"
#include "DisableAttackRootMotion.h"
#include "EAttackTransition.h"
#include "EAttackTypeCategory.h"
#include "EComboTimingPolicy.h"
#include "ECrowdControlCombatState.h"
#include "ECrowdControlDirection.h"
#include "ECrowdControlVariant.h"
#include "EDismountType.h"
#include "HitResultCompressed.h"
#include "InputPressedParams.h"
#include "InstancedObjectContainer.h"
#include "LandedResult.h"
#include "ManualReload.h"
#include "NextStateQueue.h"
#include "OnActiveRiposteWindowDelegate.h"
#include "OnCounterWindowDelegate.h"
#include "OnDownedStateChangedDelegate.h"
#include "OnGetUpDelegate.h"
#include "ParryEventState.h"
#include "PostUpdateWeaponTracersDelegate.h"
#include "PreviousCombatState.h"
#include "RagdollHitEventDelegate.h"
#include "RagdollHitFxEventDelegate.h"
#include "ReplicatedCombatStateInfo.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_FReplicatedCombatStateInfo.h"
#include "StartAttackEventDelegate.h"
#include "SwingThroughInfo.h"
#include "TurnLimitState.h"
#include "CombatStateComponent.generated.h"

class AAbilityInvocation;
class AActor;
class AInventoryItem;
class ATBLCharacter;
class UAbilitySpec;
class UAction;
class UCombatState;
class UCombatStateQueue;
class UCombatStateSet;
class UCombatStateSynchronization;
class UDataTable;
class UDrainStamina;
class ULockTurnAngle;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UCombatStateComponent : public UActorComponent, public IInstancedObjectContainer, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateChanged OnCombatStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAttackEvent OnStartAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAttackEvent OnSwitchAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateBegin OnCombatStateBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateEnd OnCombatStateEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdControlNoDamage OnCrowdControlNoDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateChanged OnAnimationEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateEvent OnCombatStateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRagdollHitEvent OnRagdollHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRagdollHitFxEvent OnRagdollHitFxEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUp OnGetUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCounterWindow OnProjectileCounterWindowStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCounterWindow OnProjectileCounterWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCounterWindow OnCounterWindowStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCounterWindow OnCounterWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveRiposteWindow OnActiveRiposteWindowStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveRiposteWindow OnActiveRiposteWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownedStateChanged OnDownedStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedCombatStateInfo SimulatedCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelayedQueueHeldInputs> DelayedQueueHeldInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayDebugTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideHitDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideHitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideCrowdControlVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTurnLimitState TurnLimitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostUpdateWeaponTracers PostUpdateWeaponTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWeaponTracersUpdating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceCanMount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHorseAttackSwitchDirection: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnReplicatedCombatState, meta=(AllowPrivateAccess=true))
    FReplicated_FReplicatedCombatStateInfo ReplicatedCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateSynchronization* CombatStateSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NonAbilitiesAnimationDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatStateSet* CombatStateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCombatState*> AllStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateInfo CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdenticalComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreviousCombatState> PreviousStates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwingThroughInfo CurrentSwingThroughInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwingThroughInfo> PreviousSwingThroughInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CooldownEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwitchingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelToParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextStateQueue NextStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNextStateInputParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPressedParams NextStateInputParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTakenEvent LastDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTimerOvertime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideCurrentAnimTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationTiming OverrideCurrentAnimTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncStartAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateStartAttack SyncStartAttackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAction*> InstancedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponTracerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> CurrentTracerWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EndTracerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnEndAnimationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilitiesOverridesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackInfo SwitchAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideTimingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InterruptingCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CooldownRefreshCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KnockedDownCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DownedCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CounterAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActiveRiposteAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawStrengthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileCounterTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveRiposteTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeintStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewFeintTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewFeintAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewFeintHeavyAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULockTurnAngle* LockTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrainStamina* DrainStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbilityActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LagCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MaxLagCompensationMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInterruptedByJab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasHitByProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastHitWasTeamHit;
    
public:
    UCombatStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastHitTeamHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInterruptedByJab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasHitByProjectile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasBlockedWithParryForgivenessWindow() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void StartProjectileCounterWindow();
    
    UFUNCTION(BlueprintCallable)
    void StartCounterWindow();
    
    UFUNCTION(BlueprintCallable)
    void StartActiveRiposteWindow();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEndCounterWindow() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEndActiveRiposteWindow() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSimulatedCombatState(bool bBroadcastEndState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartReleaseStab(const FCombatStateReleaseStab& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartHeavyAttack(const FCombatStateHeavyAttack& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartFire(const FCombatStateFire& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartChargeStab(const FCombatStateChargeStab& Params);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerManualReload(FManualReload Params);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerHitSuccessWorldWithStats(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bBreakableHit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHitSuccess(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bIsInTeamThwackRange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetUp(const FCombatStateGetUp& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisableAttackRootMotion(const FDisableAttackRootMotion& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugGotoState(FName CombatState, FName HitDirection, int32 CrowdControlVariant);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelAttack(const FCombatStateCancelAttack& Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetQueuedInputs();
    
    UFUNCTION(BlueprintCallable)
    FReplicatedCombatStateInfo ReplicateCombatState(bool bForceNetUpdate);
    
    UFUNCTION(BlueprintCallable)
    void Reload(AInventoryItem* Item, bool bReplicateToClient);
    
    UFUNCTION(BlueprintCallable)
    void QueueHeldInputs(FName InputName, bool bIgnoreLastAttackInput);
    
    UFUNCTION(BlueprintCallable)
    void OnWasParried(ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaDrained();
    
    UFUNCTION(BlueprintCallable)
    void OnReplicatedCombatState();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdolled();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnProjectileCounterWindowTimeout(float OverTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnParrySuccess(ATBLCharacter* DefendingCharacter, ATBLCharacter* AttackingCharacter, FParryEventState ParryEventState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementInput(FName Direction);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMeleeSuccess(ATBLCharacter* HitCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FLandedResult& LandedResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKilled();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJumpPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemStackChanged(AInventoryItem* Item, int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void OnHitWorld(AActor* HitActor, bool bBreakableHit, bool bAutonomous);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAnimationTimeout(float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnDismount(AActor* AttachParent, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageCaused(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(const FDamageTakenEvent& DamageEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCounterWindowTimeout(float OverTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClash(ATBLCharacter* Initiator, ATBLCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActiveRiposteWindowTimeout(float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateTimer(float OverTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbilityInitiated(AAbilityInvocation* Invocation);
    
    UFUNCTION(BlueprintCallable)
    void ManualReload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAttackTracers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiposte() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPreMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParryQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockedDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterrupted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInState(FName StateName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProjectileCounterWindow() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInParryForgivenessWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCounterWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInActiveRiposteWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldAttackPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeavy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancelling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveRiposte() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityUnblockable() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDelayedQueueHeldInputs();
    
public:
    UFUNCTION(BlueprintCallable)
    void GotoStateReplicated(FName NextStateName, bool bAutonomous, float OverrideStateTime, ECrowdControlVariant Variant);
    
    UFUNCTION(BlueprintCallable)
    void GotoState(FName NextStateName, float OverrideStateTime, bool bStartAttack, ECrowdControlVariant Variant);
    
    UFUNCTION(BlueprintCallable)
    void GotoParrySuccessReplicated(int32 ParryAttackID, bool bWasBlockedWithParryForgivenessWindow);
    
    UFUNCTION(BlueprintCallable)
    void GotoCounterReadyStateReplicated(int32 ParryAttackID, FName AttackerAttackName);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeInCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQueuedInput() const;
    
    UFUNCTION(BlueprintCallable)
    FCombatStateInfo GetPreviousStateInfoByName(FName InCombatState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCombatStateInfo GetPreviousStateInfo(bool bLastAttackState, bool bIgnoreQuickIdle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumHoldingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECrowdControlDirection GetLastHitDirection_CrowdControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLastHitDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFeintMinTime() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugPreviousSwingThroughInfo();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDebugPreviousStates();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCombatStateInfo GetCurrentStateInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackTypeCategory GetCurrentAttackTypeCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAttackTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetCurrentAttackItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackInfo GetCurrentAttackInfo(bool bLastValidAttack) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentAttackDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAttackComboState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAttackCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAnimationLength() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCounterWindowTime() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetComboTimingPolicyString(EComboTimingPolicy ComboTimingPolicy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatStateSynchronization* GetCombatStateSynchronization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatStateQueue* GetCombatStateQueue() const;
    
    UFUNCTION(BlueprintCallable)
    UCombatState* GetCombatStateBlueprint(const FName& StateName);
    
    UFUNCTION(BlueprintCallable)
    float GetClientTimeStamp() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAttackTransitionString(EAttackTransition AttackTransition) const;
    
    UFUNCTION(BlueprintCallable)
    float GetAttackCooldownRemainingByName(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void ExtendCounterWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void EndProjectileCounterWindow();
    
    UFUNCTION(BlueprintCallable)
    void EndCounterWindow();
    
    UFUNCTION(BlueprintCallable)
    void EndActiveRiposteWindow();
    
    UFUNCTION(BlueprintCallable)
    void DoHitSuccess(int32 AttackID, FHitResultCompressed HitCompressed, bool bParried, bool bIsInTeamThwackRange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidLastAttackDisarm() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugGotoState(FName CombatState, FName HitDirection, int32 CrowdControlVariant);
    
    UFUNCTION(BlueprintCallable)
    void CrowdControl_NoDamage(ECrowdControlCombatState CombatState, FCrowdControlParams CrowdControlParams, bool bAutonomous);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecordPreviousSwingThroughInfo(FSwingThroughInfo SwingThroughInfo);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOutOfStamina(FName NewState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGotoState(FName NextState, float OverrideStateTime, ECrowdControlVariant Variant);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGotoParrySuccess(int32 ParryAttackID, bool bWasBlockedWithParryForgivenessWindow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGotoCounterReadyState(int32 ParryAttackID, FName AttackerAttackName);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelProjectile(FName CombatState);
    
    UFUNCTION(BlueprintCallable)
    bool CanDoHeavyAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastGetUp(FName Direction);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDrawStrengthModifier(uint8 InDrawStrengthModifier);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDebugGotoState(FName CombatState, FName HitDirection, int32 CrowdControlVariant);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastCrowdControl_NoDamage(ECrowdControlCombatState CombatState, FCrowdControlParams CrowdControlParams, bool bSkipAutonomous);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_EndWeaponTracers();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ActivateAbility();
    
private:
    UFUNCTION(BlueprintCallable)
    bool AbilityHasMeleeTargetMethod(UAbilitySpec* AbilitySpec);
    
    
    // Fix for true pure virtual functions not being implemented
};

