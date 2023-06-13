#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "AttackInfo.h"
#include "DamageTakenEvent.h"
#include "DataTableRowSelection.h"
#include "DeathDamageTakenEvent.h"
#include "EFaction.h"
#include "EHorseImpactLocation.h"
#include "EHorseToCharacterImpactType.h"
#include "EHorseToHorseImpactType.h"
#include "EHorseToWorldImpactType.h"
#include "FastSharedProperties_Horse.h"
#include "HorseAiming.h"
#include "HorseFxEventDelegate.h"
#include "HorseMovementCorrection.h"
#include "HorseOnInterpToMountLocationDelegate.h"
#include "HorsePlayDismountAnimationDelegate.h"
#include "HorsePlayLandedAnimationDelegate.h"
#include "HorsePlayMountAnimationDelegate.h"
#include "LanceChargeEnabledDelegate.h"
#include "LanceChargeFailedDelegate.h"
#include "OnHorseBumpDelegate.h"
#include "OnHorseRootMotionChangedDelegate.h"
#include "OnHorseSpeedRequirementFailedDelegate.h"
#include "OnHorseStartAttackDelegate.h"
#include "OnHorseToCharacterImpactDelegate.h"
#include "OnHorseToHorseImpactDelegate.h"
#include "OnHorseToWorldImpactDelegate.h"
#include "OnKickNoDriverDelegate.h"
#include "SiegeEngine.h"
#include "Templates/SubclassOf.h"
#include "ThirdPersonCameraParams.h"
#include "TimeStampedDamageTakenEvent.h"
#include "Horse.generated.h"

class AActor;
class AHorse;
class APawn;
class ATBLCharacter;
class UAbilitySpec;
class UCapsuleComponent;
class UCombatState;
class UCombatStateComponent;
class UCombatStateQueue;
class UCombatStateSet;
class UCombatStateSynchronization;
class UConditionsComponent;
class UCurveVector;
class UDataTable;
class UHorseMovement;
class UInteractableComponent;
class UMovementModifierComponent;
class UPrimitiveComponent;
class UPushingComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTeamOwnershipComponent;

UCLASS(Abstract, Blueprintable)
class AHorse : public ASiegeEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseOnInterpToMountLocation OnInterpToMountLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorsePlayMountAnimation PlayMountAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorsePlayDismountAnimation PlayDismountAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorsePlayLandedAnimation OnLandedAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseFxEvent OnHorseFxEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanceChargeEnabled OnLanceChargeEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanceChargeFailed OnLanceChargeFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseStartAttack OnStartAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickNoDriver OnKickNoDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseSpeedRequirementFailed OnSpeedRequirementFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseRootMotionChanged OnRootMotionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseToCharacterImpact OnHorseToCharacterImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseToHorseImpact OnHorseToHorseImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseToWorldImpact OnHorseToWorldImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FXImpactSpeedThreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorseBump OnHorseBump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CollisionRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConditionsComponent* ConditionsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementModifierComponent* MovementModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamOwnershipComponent* TeamOwnershipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRiderUseControllerRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThirdPersonCameraParams ThirdPersonCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCameraOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ExpireTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockdownBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateSynchronization* CombatStateSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatStateSet> CombatStateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushingComponent* PushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorseMovement* HorseMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WorldCollision_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WorldCollision_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WorldCollision_Both;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WorldCollision_FrontLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WorldCollision_BackLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WorldCollision_Rider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PushingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation_FrontLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation_BackLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FrontLegsTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BackLegsTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastClientRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastClientForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastClientMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSpawnOnHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGallopExhausted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmergencyBrakeExhausted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTimeStampedDamageTakenEvent> DamageTakenEvents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilitiesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection LanceCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySpec* LanceChargeSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MountDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HorizLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName HorseCollisionPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLanceChargeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreviousIsPlayingRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseAiming HorseAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle QueuedAccelerateVoTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle QueuedDeccelerateVoTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGalloping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAccelerateVoBeenPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction LastMountedFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorseGallopVoIgnoredOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHorseMountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastDriverRootLocation;
    
public:
    AHorse();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void WantsToGallop(bool bWantsToGallop);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySlowdownForKick(FName AttackName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartInterpToMountLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldPushBackOnTurnAgainstWall();
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerHorseMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerHorseMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 NewFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerHorseMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector ClientLoc, uint8 CompressedMoveFlags, uint32 View, UPrimitiveComponent* ClientMovementBase, uint8 ClientMovementMode, float InRotationYaw, int16 ForwardSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RiderToWorldImpact(FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    void PostHorseFxEvent(FName EventName, float EventScale, const TArray<FName>& EventTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRiderStartAttack();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnProcessPlayerInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnHorseDamaged(const FDamageTakenEvent& Event);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDismountSetAttached(bool bAttached);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicControlRestricted(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicControlAllowed(ATBLCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastFastSharedReplication(const FFastSharedProperties_Horse& Properties);
    
    UFUNCTION(BlueprintCallable)
    void MaintainSpeedOnImpact();
    
    UFUNCTION(BlueprintCallable)
    void KnockRiderOffHorse();
    
    // FIXME
    /*UFUNCTION(BlueprintCallable)
    void Kill();*/
    
    UFUNCTION(BlueprintCallable)
    void KickNoDriver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExhausted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void InitiateKick(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HorseToWorldImpact(FHitResult Hit, EHorseImpactLocation ImpactLocation, EHorseToWorldImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HorseToHorseImpact(AHorse* TargetHorse, EHorseImpactLocation ImpactLocation, EHorseToHorseImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HorseToCharacterImpact(ATBLCharacter* TargetCharacter, EHorseImpactLocation ImpactLocation, EHorseToCharacterImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Horse_ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, const FHorseMovementCorrection& HorseCorrection);
    
    UFUNCTION(BlueprintCallable)
    bool HasSpeedForAttack(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCapsuleComponent* GetWorldCollisionRider();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWorldCollisionLegs(UCapsuleComponent*& FrontLegs, UCapsuleComponent*& BackLegs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPrimitiveComponent*> GetWorldCollisionFront();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPrimitiveComponent*> GetWorldCollisionBack();
    
    UFUNCTION(BlueprintCallable)
    FVector GetThirdPersonCameraAttachPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ECollisionResponse GetRiderToWorldCollision();
    
    UFUNCTION(BlueprintCallable)
    float GetRelativeSpeed(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPrimitiveComponent*> GetPushingCollision();
    
    UFUNCTION(BlueprintCallable)
    FName GetHorseCollisionProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurveValueBySpeed(UCurveVector* Curve, float RelativeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ForceRun(float Time);
    
    UFUNCTION(BlueprintCallable)
    void EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSetFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastRandomSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPostHorseFxEvent(FName EventName, float EventScale, const TArray<FName>& EventTags);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPlayDismountAnimation(FName AnimationName);
    
};

