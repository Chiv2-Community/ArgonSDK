#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyInstance -FallbackName=AssemblyInstance
#include "Engine/EngineTypes.h"
#include "CombatStateModifiers.h"
#include "CombatStateSlowdown.h"
#include "DamageTakenEvent.h"
#include "EAbilityTermination.h"
#include "EAttackTransition.h"
#include "EAttackTypeCategory.h"
#include "ECrowdControlCombatState.h"
#include "ECrowdControlVariant.h"
#include "EHeldBehavior.h"
#include "EKillReason.h"
#include "EMod.h"
#include "NextStateTimer.h"
#include "PersonalityEmoteTableRow.h"
#include "ScaleDirectionParams.h"
#include "TurnLimitParams.h"
#include "TurnLockParams.h"
#include "TurnLockState.h"
#include "CombatState.generated.h"

class AActor;
class ACharacter;
class AInventoryItem;
class ATBLCharacter;
class UAttackType;
class UTBLCharacterMovement;

UCLASS(Blueprintable, MinimalAPI)
class UCombatState : public UAssemblyInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EMod::Type>> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateModifiers ModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAttackState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSprintState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRemainInSprint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSprintDecelerate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndSpawnSpeedBonus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsClimbingState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeRestarted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTurnLock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseScaleDirectionalMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSwitchInventoryItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanMountActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKnockRiderOffHorse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndWeaponTracers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnimationEnded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSameAttackClash: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCancelHorseAttack: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBeginFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDidStartAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanInitiateCrouch: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrowdControlPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdControlThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnLimitParams TurnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnLockParams TurnLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaleDirectionParams ScaleDirectionalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKillReason KillReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator KnockRiderOffHorseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHoldingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityTermination::Type> EndAttackReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoftRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAnimationLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackTransition AttackTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNextStateTimer> NextStateTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnLockState TurnLockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStateSlowdown SlowdownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleDirectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlowdownId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingId;
    
public:
    UCombatState();
    UFUNCTION(BlueprintCallable)
    void UseItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SyncDrawStrength() const;
    
    UFUNCTION(BlueprintCallable)
    void StopFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRevive(ATBLCharacter* DownedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StartReleaseStab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHoldAttack();
    
    UFUNCTION(BlueprintCallable)
    void StartHeavyAttack(bool bIsHeavy);
    
    UFUNCTION(BlueprintCallable)
    void StartFocus();
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
    UFUNCTION(BlueprintCallable)
    void StartFeint();
    
    UFUNCTION(BlueprintCallable)
    void StartChargeStab();
    
    UFUNCTION(BlueprintCallable)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseDrawStrengthModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSprintDecelerate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRemainInSprint() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponLoaded(bool bLoaded);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatStateTimer(int32& OutHandle, FTimerDynamicDelegate Delegate, float Time, bool bLooping);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Revive();
    
    UFUNCTION(BlueprintCallable)
    void RestOfCurrentState(bool InCanSwitchInventoryItems, bool InCanMountActors);
    
    UFUNCTION(BlueprintCallable)
    void ResetMinimumHoldingTime();
    
    UFUNCTION(BlueprintCallable)
    void ResetAmmoAttachment();
    
    UFUNCTION(BlueprintCallable)
    void ProjectileInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void PlayEquipAnimation(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OverrideCrowdControlEvent(ECrowdControlCombatState CombatState, ECrowdControlVariant Variant);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTurnLockTimeout(float OverTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEquip(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementInput(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemStackChanged(AInventoryItem* Item, int32 Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnFireProjectile();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTurnLock();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsReload() const;
    
    UFUNCTION(BlueprintCallable)
    void KnockRiderOffHorse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinWindow(float WindowTime, bool bFromEndOfState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiposte() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingReloadableThrowable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldAttackPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeavy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusQueued();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatStateTimerActive(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackQueued() const;
    
    UFUNCTION(BlueprintCallable)
    void HoldState(EHeldBehavior HeldBehavior);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDelayedStartAttack();
    
public:
    UFUNCTION(BlueprintCallable)
    void Getup(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastQueuedAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInStatePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSoftRecoveryPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackTypeCategory GetQueuedAttackTypeCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackType* GetQueuedAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQueuedAttackName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQueuedAttackCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQueuedAttackCanComboInInterrupt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumHoldingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMaxDrawStrengthTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDrawStrengthModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackTypeCategory GetCurrentAttackTypeCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackType* GetCurrentAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAttackName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAttackCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCombatStateFromQueuedAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetCharactersEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharactersCurrentEmote(bool& IsRootAnimation, FPersonalityEmoteTableRow& Emote, int32& EmoteId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTBLCharacterMovement* GetCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCancelledCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAttackTransition GetAttackTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbilityPropertyValue(FName PropertyName) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventWasParried(ATBLCharacter* ParryingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventRagdolled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventParrySuccess(ATBLCharacter* ParriedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventMeleeSuccess(ATBLCharacter* DamagedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventLanded(ACharacter* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventEndState(FName NextState, bool bStartAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventEndAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventDamageCaused(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventDamage(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EventCannotQueueAttack(UAttackType* AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventCancelAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventBeginState(FName PreviousState, float PreviousStateTime, float AnimationLength);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventBeginFire(FName AttackName, bool bHeldQueue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisableSprintTurn() const;
    
    UFUNCTION(BlueprintCallable)
    void CombatStateEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    bool CanUseWeaponsAndSiegeActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSwitchInventoryItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSprint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CannotUseInteractables() const;
    
    UFUNCTION(BlueprintCallable)
    bool CannotMove() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMountActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInitiateQueuedAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanInitiateCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFeint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanDash() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCrouch() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanComboFromState() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeCancelled(bool bIsCancelIntoParry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AutomaticReload() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTimerHandle(int32 Handle, FName CombatStateName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActionQueueAttack();
    
    UFUNCTION(BlueprintCallable)
    void ActionGotoState(FName NextState, float OverrideStateTime, bool bResetStateTime);
    
    UFUNCTION(BlueprintCallable)
    void ActionClearToggleAltAttack();
    
    UFUNCTION(BlueprintCallable)
    void ActionClearHeldAttackQueue();
    
    UFUNCTION(BlueprintCallable)
    void ActionClearAttackQueue();
    
};

