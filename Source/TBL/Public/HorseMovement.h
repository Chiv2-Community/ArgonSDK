#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "AttackInfo.h"
#include "EHorseImpactLocation.h"
#include "EHorseMovementInput.h"
#include "EHorseToCharacterImpactType.h"
#include "EHorseToHorseImpactType.h"
#include "EHorseToWorldImpactType.h"
#include "HorseBreakingDelegate.h"
#include "HorseBumpSettings.h"
#include "HorseImpactRules.h"
#include "HorseImpactSpeedSettings.h"
#include "HorseInputState.h"
#include "HorseLandedSignatureDelegate.h"
#include "HorseMovementBlend.h"
#include "HorseMovementData.h"
#include "HorseMovementInput.h"
#include "HorseMovementScale.h"
#include "HorseToCharacterImpactSettings.h"
#include "HorseToHorseBump.h"
#include "HorseToHorseImpactSettings.h"
#include "HorseToWorldBump.h"
#include "HorseToWorldImpactSettings.h"
#include "HorseWantsToGallopDelegate.h"
#include "OverrideForwardSpeed.h"
#include "OverrideMaxSpeed.h"
#include "OverrideTurnRate.h"
#include "Replicated_Bool.h"
#include "Replicated_Float.h"
#include "SiegeEngineMovement.h"
#include "TurnTowardsCameraParams.h"
#include "HorseMovement.generated.h"

class AActor;
class AHorse;
class ATBLCharacter;
class ATBLCharacterBase;
class UCombatState;
class UCurveFloat;
class UDataTable;
class UMovementModifierComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHorseMovement : public USiegeEngineMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseLandedSignature OnLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseWantsToGallop OnWantsToGallop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseBreaking OnBreaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementData CurrentMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentForwardSpeed, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedCurrentForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModifiedForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStrafeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTurnRate, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedCurrentTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentForwardAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStrafeAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTurnRateAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTurnRateAccel, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedCurrentTurnRateAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStrafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PendingTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetSpeed, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetSpeed, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ReplicatedFloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAccelerating, meta=(AllowPrivateAccess=true))
    FReplicated_Bool ReplicatedIsAccelerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDecelerating, meta=(AllowPrivateAccess=true))
    FReplicated_Bool ReplicatedIsDecelerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedForwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToGallop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAutoRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseMovementDirectionTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseMovementInfoTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementScale AccelerationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementScale TurnRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnTowardsCameraParams TurnTowardsCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CruisingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCruisingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAccelerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDecelerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementModifierComponent* MovementModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedToTurnRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForwardSpeedToStrafeSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForwardAngleToTurnMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrafeAngleToTurnMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IdleAngleToTurnMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrafeToTurnRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InertiaTurnDecelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InertiaStrafeTurnDecelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedToForwardDecelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedToForwardDecelWhileStrafingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedToForwardDecelEmergency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InputTimeToMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GamepadInputToAxisMagnitudeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaStrafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaTurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDoubleTapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToRepressKeyForReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MovementDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaxMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanInstantKickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanSlowDownToKickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowdownToEmoteSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAgainstWallResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBreakingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakingToReverseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyBrakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakingOrientationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoStrafeOrbiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentMaintainVelocityOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDashDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvertBackwardsStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBackwardStrafeAngleRelativeToCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeTurnMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardsStrafeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseBumpSettings HorseBumpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToCharacterImpactSettings HorseToCharacterImpactSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToHorseImpactSettings HorseToHorseImpactSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseToWorldImpactSettings HorseToWorldImpactSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseImpactSpeedSettings HorseImpactSpeedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseImpactRules HorseImpactRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadExclusiveSagitalInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadExclusiveHorizontalInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadInputOuterThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementBlend BlendMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementInput MovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseMovementInput PreviousMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastHorizontalInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementStateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStuckPenetrating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StuckPenetratingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlowDownToKickAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlowdownToKickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult ImpactHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactHitStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHorseInputState> InputState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StandardMovementStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustingFloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStepUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertStepUpMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CurveSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOrientationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOrientationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookTurnPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmergencyBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastLandedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* FallingCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MaintainHorseSpeedOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncMaintainImpactSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorseToHorseImpactType HorseToHorseImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorseImpactLocation ImpactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideTurnRate OverrideTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideForwardSpeed OverrideForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideMaxSpeed OverrideMaxSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, float> HitActors;
    
public:
    UHorseMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnTowardsCamera(float TurnRate, float TurnRateWithInput);
    
    UFUNCTION(BlueprintCallable)
    void StartDash();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLeanDirection(FName Direction);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHorseToWorldBump(FHorseToWorldBump Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHorseToHorseBump(FHorseToHorseBump Params);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDecelerating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAccelerating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTurnRateAccel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTurnRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentForwardSpeed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPushingOverlap(TArray<ATBLCharacterBase*> Overlaps);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyTurnRateScale(float Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ModifyTargetSpeed(float Target);
    
    UFUNCTION(BlueprintCallable)
    void ModifyAccelerationScale(float Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMovementState(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrafing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementStateLessThanEqual(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementStateGreaterThan(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementStateEqual(FName State);
    
    UFUNCTION(BlueprintCallable)
    void ImpactTurn(float Delta, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ImpactSlowdown(float Delta, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ImpactMaxSpeed(float MaxSpeed, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ImpactBumpOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedInState(FName State, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettleSpeedInState(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMovementStateFromSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSpeedInState(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeedInState(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxKickSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertedBackwardsStrafe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstantKickSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputTurn(float& InputTurn, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputStrafe(float& InputStrafe, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputForward(float& InputForward, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputDirection(EHorseMovementInput& Direction, float& HeldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentForwardSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoostMode();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugHorseMovePath(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPerformBump(float Direction, float TurnAngle, float Scale, bool bRearImpact, bool bSideImpact, AHorse* InitiatorHorse);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientImpactTurn(float Delta, float Time);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientImpactSlowdown(float Delta, float Time);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientImpactMaxSpeed(float MaxSpeed, float Time);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName ClampMovementState(FName State);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHorseCollisionFromIdle(float Direction);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastHorseToWorldImpact(FHitResult Hit, EHorseImpactLocation HorseImpactLocation, EHorseToWorldImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastHorseToHorseImpact(AHorse* TargetHorse, EHorseImpactLocation HorseImpactLocation, EHorseToHorseImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastHorseToCharacterImpact(ATBLCharacter* TargetCharacter, EHorseImpactLocation HorseImpactLocation, EHorseToCharacterImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastBump(AActor* Actor, float TurnAngle, float BumpVelocity, bool bDirection, bool bRearImpact);
    
};

