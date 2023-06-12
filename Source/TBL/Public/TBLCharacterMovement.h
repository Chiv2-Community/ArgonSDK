#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "AimPenalty.h"
#include "AttackInfo.h"
#include "CharJumpedSignatureDelegate.h"
#include "CharLandedSignatureDelegate.h"
#include "CharSprintStateSignatureDelegate.h"
#include "ChaseMechanicParams.h"
#include "DisableSprintAttackOnQuickTurn.h"
#include "DismountBlendParams.h"
#include "EDismountType.h"
#include "EMovementDirection.h"
#include "EndLadderMovement.h"
#include "LadderRootMotionBlend.h"
#include "LadderRotationBlend.h"
#include "LadderState.h"
#include "LandingSlowDownParams.h"
#include "MovementStateChangedSignatureDelegate.h"
#include "MovementSyncSignatureDelegate.h"
#include "OnCrouchDelegate.h"
#include "OnDashDelegate.h"
#include "OnMovementInputDelegate.h"
#include "OnMovementStateUpdateDelegate.h"
#include "OnSprintTurnDelegate.h"
#include "OnVaultSignatureDelegate.h"
#include "PlayAnimationDelegate.h"
#include "PlayLadderAnimation.h"
#include "PostLockMovementDelegate.h"
#include "Replicated_Bool.h"
#include "Replicated_EMovementDirection.h"
#include "Replicated_FName.h"
#include "Replicated_FReplicatedSprintTurn.h"
#include "Replicated_Float.h"
#include "ReverseAnimationDelegate.h"
#include "ScaleDirectionParams.h"
#include "SpawnBoost.h"
#include "SpawnState.h"
#include "SprintState.h"
#include "SprintStopSignatureDelegate.h"
#include "SprintTurnParams.h"
#include "StartSpawnBonus.h"
#include "StartedFallingSignatureDelegate.h"
#include "TBLCharacterMovementBaseComponent.h"
#include "TBLCharacterMovement.generated.h"

class AActor;
class AVaultMarker;
class UCombatState;
class UMovementModifierComponent;
class UMovementSequence;
class UStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLCharacterMovement : public UTBLCharacterMovementBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementStateChangedSignature OnMovementStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharJumpedSignature OnJumpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharJumpedSignature OnJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharLandedSignature OnLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharSprintStateSignature OnSprintState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartedFallingSignature OnStartedFalling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementSyncSignature OnMovementSync;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintStopSignature OnSprintStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVaultSignature OnVault;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimation OnPlayLadderAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReverseAnimation OnReverseLadderAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimation OnPlaySpawnAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementInput OnMovementInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementStateUpdate OnMovementStateUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSprintTurn OnSprintTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SprintStrafeSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ForwardStrafeSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BackStrafeSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableSlideMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintForwardAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStrafeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaseMechanicParams ChaseMechanicParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandingSlowDownParams LandingSlowDownParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMinSpinningSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMaxSpinningSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMinStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMaxStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMinCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMaxCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchSpinningSpecialInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintTurnParams SprintTurnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisableSprintAttackOnQuickTurn DisableSprintAttackOnQuickTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedTurnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumCrouchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSprintDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DelayPlaySpawnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnState SpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingSpawnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveForwardHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveBackwardHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveRightHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveLeftHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBackwardHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRightHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLeftHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToAutoSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprintHorizLockTurnId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprintVerticalLockTurnId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAltAttackWithMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Bool InventoryCanJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float InventorySpeedPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float PerksSpeedBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAimPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRangedInaccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostLockMovement OnPostLockMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrouch OnCrouch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDash OnDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMovementLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadUsePressedTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutorunSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMaxSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTickSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementModifierComponent* MovementModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bIsSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintState SprintState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnBoost SpawnBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepCurrentSpawnBoost, meta=(AllowPrivateAccess=true))
    FReplicated_Float RepCurrentSpawnBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSprintTurn, meta=(AllowPrivateAccess=true))
    FReplicated_FReplicatedSprintTurn ReplicatedSprintTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDowned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownedTurnRateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpFromDashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastLandedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLadderState LadderState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLadderRootMotionBlend LadderRootMotionBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLadderRotationBlend LadderRotationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float ChaseBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TeleportRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastFindFloorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastHitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindFloorResult CurrentFollowGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterMovementState, meta=(AllowPrivateAccess=true))
    FReplicated_FName CharacterMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastNonZeroVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastNonZeroAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_EMovementDirection LastHorizontalInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_EMovementDirection LastVerticalInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAimPenalty> ActiveAimPenalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementBlockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScaleDirectionParams> ActiveScaleDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleDirectionalMovementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bMovementBlockEndOnLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDismountBlendParams DismountBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateSpawnBonusHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStartMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeAccelerationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrouchHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrouchKeyHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPossessed: 1;
    
public:
    UTBLCharacterMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void WalkKeyReleased();
    
    UFUNCTION(BlueprintCallable)
    void WalkKeyPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSprint(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCrouch();
    
    UFUNCTION(BlueprintCallable)
    void StartJump();
    
    UFUNCTION(BlueprintCallable)
    void StartDash();
    
    UFUNCTION(BlueprintCallable)
    void StartCrouch();
    
    UFUNCTION(BlueprintCallable)
    void StartAutoSprint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SprintTurnTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SprintTurnDecelerate();
    
    UFUNCTION(BlueprintCallable)
    void SprintTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SprintStartTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SprintStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void SprintKeyReleased();
    
    UFUNCTION(BlueprintCallable)
    void SprintKeyPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SprintFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void SprintDecelerateToSprint(float Speed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SprintDecelerateTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SprintDecelerate();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWalkKey(bool bWalk);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintLocked(bool bSprintLock);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintKey(bool bSprint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDownedTurnRate(bool bDowned);
    
    UFUNCTION(BlueprintCallable)
    void SetDownedAutonomous();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoSprintKey(bool bSprint);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSprint(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutorunElapsedTime(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAltAttackWithMovement(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartSpawnBonus(const FStartSpawnBonus& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMoveRight(bool bPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMoveLeft(bool bPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMoveBackward(bool bPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDowned(bool bDowned, float ClientTimeStamp);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaySpawnAnimation(FName Animation, float ActorYaw, float ClientTimeStamp);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayLadderAnimation(FPlayLadderAnimation Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMountLadder(float ClientTimeStamp);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLadderDismountPressed();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndLadderMovement(FEndLadderMovement Params);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSprintCombatState();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySpawnAnimation_Internal(FName Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpawnAnimation(FName Animation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSprintTurn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepCurrentSpawnBoost();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterMovementState();
    
    UFUNCTION(BlueprintCallable)
    void OnLadderAnimationEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDismount(AActor* AttachParent, EDismountType DismountType);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveIgnoreActorRemove(AActor* ActorToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void MoveIgnoreActorAdd(AActor* ActorToIgnore);
    
    UFUNCTION(BlueprintCallable)
    FVector MoveDirectionToVector(TEnumAsByte<EMovementDirection> Direction) const;
    
    UFUNCTION(BlueprintCallable)
    float MoveDirectionToAngle(TEnumAsByte<EMovementDirection> Direction) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void LimitSprintTurnRate(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void LadderDismountReleased();
    
    UFUNCTION(BlueprintCallable)
    void LadderDismountPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprintDecelerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouchKeyHeld();
    
    UFUNCTION(BlueprintCallable)
    void HandleDelaySpawnAnimation();
    
    UFUNCTION(BlueprintCallable)
    float GetSprintTime();
    
    UFUNCTION(BlueprintCallable)
    FSprintState GetSprintState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMovementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMovementInputName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementInputDirection(bool bUseLastNonZero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementDirection> GetMovementDirection(bool bUseInputDirection, bool bUseLastNonZero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementDirection> GetLastVerticalInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementDirection> GetLastHorizontalInput() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultMovementSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChaseBonusPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceMaxSprint();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndPhysSpawn(bool bDisableRootMotion);
    
    UFUNCTION(BlueprintCallable)
    void EndLadderMovement();
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterCollision();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DownedSprintTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void DownedSprintStart();
    
    UFUNCTION(BlueprintCallable)
    void DownedSprintFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableCharacterCollision();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMountLadderFailed();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceLadderMovement(bool bDirectionUp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintShove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprint(bool bStartSprint) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStartVault(AVaultMarker* VaultMarker);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSetCharacterCollision(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPlayLadderAnimation(FName Animation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastIgnoreActorWhenMoving(AActor* ActorToIgnore, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDownToUpLadderAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyKnockback(UMovementSequence* Sequence, AActor* Initiator);
    
};

