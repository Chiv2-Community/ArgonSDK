#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimDamageParams.h"
#include "AnimNotifyStepEventDelegate.h"
#include "AttackInfo.h"
#include "CrowdControlParams.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "ECharacterSignificanceLevel.h"
#include "ECrowdControlVariant.h"
#include "EDismountType.h"
#include "EHorseImpactLocation.h"
#include "EHorseToCharacterImpactType.h"
#include "EHorseToHorseImpactType.h"
#include "EHorseToWorldImpactType.h"
#include "PostDamageEventInfo.h"
#include "TBLAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "TBLHorseAnimInstance.generated.h"

class AActor;
class AHorse;
class AInventoryItem;
class ATBLCharacter;
class UAnimMontage;
class UAnimationSet;
class UAttackType;
class UCombatState;
class UHorseMovement;
class UTBLCharacterAnimInstance_Playable;

UCLASS(Blueprintable, NonTransient)
class UTBLHorseAnimInstance : public UTBLAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSignificanceLevel SignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasRecentlyRendered;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNotifyStepEvent OnAnimNotifyStepEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHorse* Horse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorseMovement* HorseMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasRider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLCharacterAnimInstance_Playable* RiderAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGroundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRelativeInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRelativeFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementStateMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementStateWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ProcessedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DismountMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> PreviewAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DeathMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MountUpSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> RiderCrowdControlMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> RiderCrowdControlMontage1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateAccelInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateStopDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttackCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSetBase;
    
    UTBLHorseAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFootStepSounds(float DeltaSeconds, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void StopDismountAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayMountAnimation(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLandedAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayDismountAnimation(FName AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void OnStartAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnSignificanceChanged(ECharacterSignificanceLevel InSignificance);
    
    UFUNCTION(BlueprintCallable)
    void OnRiderCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRiderCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnPostDamage(const FDamageTakenEvent& DamageEvent, const FPostDamageEventInfo& PostDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementActionStarted(FName MovementName, FRotator Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementActionFinished(FName MovementName);
    
    UFUNCTION(BlueprintCallable)
    void OnMounted(ATBLCharacter* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnKickNoDriver();
    
    UFUNCTION(BlueprintCallable)
    void OnInterpToMountLocation(FName AnimationName, ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnDismounted(ATBLCharacter* Driver, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void OnCrowdControlNoDamage(AActor* OwningActor, FName InCombatState, FCrowdControlParams CrowdControlParams);
    
    UFUNCTION(BlueprintCallable)
    void OnCrowdControl(FName InCombatState, const FAnimDamageParams& DamageEvent, ECrowdControlVariant CrowdControlVariant);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationSetChanged(TSubclassOf<UAnimationSet> AnimationSet);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingMountAnimation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetHorseMomentumBasedScale(AActor* InitiatorActor, FName AbilityName, TSubclassOf<AInventoryItem> InventoryItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnWantsToGallop(bool bWantsToGallop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStartDismount(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStartAttack(FName InAbilityName, FName InCombatState, FName InComboState, UAttackType* InAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnStagger(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnRiderCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementStateChanged(FName InMovementState, FName InPreviousMovementState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementDirectionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMovementActionStarted(FName MovementName, FRotator Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnMounted(FName Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnKnockdown(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnInterrupt(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseToWorldImpact(FHitResult Hit, EHorseImpactLocation ImpactLocation, EHorseToWorldImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseToHorseImpact(AHorse* TargetHorse, EHorseImpactLocation ImpactLocation, EHorseToHorseImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseToCharacterImpact(ATBLCharacter* TargetCharacter, EHorseImpactLocation ImpactLocation, EHorseToCharacterImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnHorseBump(AActor* OtherActor, FName Direction, float Angle, float BumpVelocity, bool bRearImpact);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnDismounted(EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventDamageNoInterrupt(const FAnimDamageParams& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_DeathAnim_End();
    
};

