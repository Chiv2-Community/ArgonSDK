#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AIRanges.h"
#include "AimAssistAttackData.h"
#include "AimAssistFrictionData.h"
#include "AimAssistTargetBoxData.h"
#include "ArrowCamSettings.h"
#include "AttachRagdollParams.h"
#include "AttackInfo.h"
#include "DataTableRowSelection.h"
#include "DeathDamageTakenEvent.h"
#include "EAmmoStackType.h"
#include "EBlockingCategory.h"
#include "ECharacterSignificanceLevel.h"
#include "EEquippedHand.h"
#include "EFaction.h"
#include "EInventoryItemDamagedState.h"
#include "EInventoryItemSlot.h"
#include "EInventoryType.h"
#include "EItemSoundPolicy.h"
#include "EMeleeAttackCategory.h"
#include "ERangedAttackCategory.h"
#include "ESpeedPenalty.h"
#include "EWeaponMaterial.h"
#include "EWeaponTag.h"
#include "EWeaponType.h"
#include "FakeClientBlendParams.h"
#include "FastSharedProperties_InventoryItem.h"
#include "GoreHeadParams.h"
#include "HorseAimingParams.h"
#include "HorseAttackType.h"
#include "InventoryAttachPointInfo.h"
#include "InventoryItemAnimation.h"
#include "InventoryItemDamagedParams.h"
#include "InventoryItemDisplayInfo.h"
#include "InventoryItemState.h"
#include "MatchStateListenerInterface.h"
#include "OnAddedToInventoryChangedDelegate.h"
#include "OnAnimationSetChangedDelegate.h"
#include "OnBattleCryTriggeredDelegate.h"
#include "OnDroppedDelegate.h"
#include "OnEquippedDelegate.h"
#include "OnFakeClientAttachedDelegate.h"
#include "OnOwnerChangedDelegate.h"
#include "OnProjectileHitEventDelegate.h"
#include "OnSetAttachedDelegate.h"
#include "OnSetOffFireDelegate.h"
#include "OnSetOnFireDelegate.h"
#include "OnSpawnFakeClientDelegate.h"
#include "OnUseItemDelegate.h"
#include "ParryHitLocation.h"
#include "PickupItemSettings.h"
#include "ProjectileSounds.h"
#include "Replicated_FName.h"
#include "Replicated_FProjectileHitParams.h"
#include "Replicated_FReplicateDrop.h"
#include "Replicated_FResetToTransform.h"
#include "Replicated_Int32.h"
#include "ShieldSettings.h"
#include "SimulatedProjectile.h"
#include "SoundSwitchEntry.h"
#include "StaminaModifiers.h"
#include "TBLActor.h"
#include "Templates/SubclassOf.h"
#include "UseItemSettings.h"
#include "WeaponAbilitySlots.h"
#include "WeaponGoreSlot.h"
#include "WeaponMaterialSoundConfig.h"
#include "WorldHitAngleRange.h"
#include "InventoryItem.generated.h"

class AActor;
class AController;
class AInventoryItem;
class APawn;
class APlayerState;
class ATBLCharacter;
class ATBLCharacterBase;
class UAkAudioEvent;
class UAkComponent;
class UAttackType;
class UBoxComponent;
class UCombatState;
class UCurveFloat;
class UCurveVector;
class UDamageSource;
class UInteractableComponent;
class UInventory;
class UMovementSequence;
class UPrimitiveComponent;
class UProjectilePenetration;
class USceneComponent;
class UShapeComponent;
class USkeletalMeshComponent;
class USpecialItemAbility;
class UStaticMesh;
class UStaticMeshComponent;
class UTBLCharacterAnimInstance;
class UTBLParticleSystemComponent;
class UTBLProjectileMovementComponent;
class UWeaponTracers;
class UWeaponTracersBlueprint;

UCLASS(Abstract, Blueprintable, Config=Game)
class TBL_API AInventoryItem : public ATBLActor, public IMatchStateListenerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ProjectileRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ProjectileSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh1PShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ProjectileCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StickPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLParticleSystemComponent* WeaponSwipeParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLParticleSystemComponent* WeaponThrowParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> CompatibleSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquippedHand> CanBeEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAimAssistAttackData> AllowedAimAssistAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysEnableFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPrioritizeCloserTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTargetAllies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysScalingDistanceFrictionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysFrictionInnerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimAssistFrictionData InnerBoxFrictionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimAssistFrictionData OuterBoxFrictionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationMinDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationMaxDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysEnableInnerBoxForgiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetismMoveSpeedModifierSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagnetismMoveSpeedModifierTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimAssistTargetBoxData AimAssistTargetBoxOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCannotEquipOnHorse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseOffhandCarryable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDualWield: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWIPItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayEquipAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsShield: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackKillAchievement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayPickupAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseItemOnEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRangedSignificance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 hasHealth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBreakable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanBeDisarmed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlaceOnGroundWhenSwapped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotAutoEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldScaleDrawStrength: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClickToFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutomaticReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanProjectileStick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanProjectileStickToShield: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignProjectilePitchToSurfaceOnStick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEventsWhenMovementFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseRangedCrossHair: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTearOffOnMovementFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverrideLifespan: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DisabledInLoadout: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EquipOnPickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysAutoPickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoPickupOwned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsUpdateVisualization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ThwackOnHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bQuickThrowSpecial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAttackWhileUnequipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseFirstAndThirdPersonTransformSetup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFakeItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UseFireAmmo, meta=(AllowPrivateAccess=true))
    uint8 bUseFireAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCarryableNPCItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquippedHand, FInventoryAttachPointInfo> AttachPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemAnimation> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemAnimation> CustomizationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnequipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAbilitySlots Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponTracersBlueprint* TracerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponTracersBlueprint* AltTracerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SiegeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* DamageScaleOnHorseback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackType* ThrownAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* Knockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProjectilePenetration* ProjectilePenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TurnLimitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VerticalTurnLimitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TurnLimitScaleByDegreesTurned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnLimitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalTurnLimitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReverseTurnLimitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReverseTurnLimitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedPenalty SpeedPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldSettings ShieldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAttackCategory MeleeAttackCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERangedAttackCategory RangedAttackCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockingCategory BlockingCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> MountedItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MountedItemParent, meta=(AllowPrivateAccess=true))
    AInventoryItem* MountedItemParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> BrokenItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> InheritAnimTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupItemSettings PickupItemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseItemSettings UseItemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConstructableLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpecialItemAbility> SpecialItemAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaction, TSubclassOf<AInventoryItem>> OverrideItemClassByTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorseAttackType> HorseAttackTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHorseAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseAimingParams HorseAimingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaminaModifiers StaminaModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthValue, meta=(AllowPrivateAccess=true))
    float HealthValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentChanceToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DamagedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryItemDamagedState DamagedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiposteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* WindupLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* Lunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* LungeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* LungeRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* HorseLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* ParrySuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* Blocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementSequence* WasHitEarly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponGoreSlot> GoreActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectileAttachedViaReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* FireDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* RangedDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDrawPowerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawPowerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoStackType AmmoStackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 MaxStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StackCount, meta=(AllowPrivateAccess=true))
    uint8 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ATBLCharacter>, uint8> OverrideMaxStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ATBLCharacter>, uint8> OverrideStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAmmoPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReloadCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> AmmoItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> FireAmmoItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> QuiverItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachAmmoSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThirdPersonProjectileSpawnPointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseThirdPersonProjectileSpawnPointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectileSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseProjectileSpawnOffsetAsProjectileOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FakeClientSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateProjectileCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProjectileRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProjectileDrawDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProjectileDistanceDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceVelocityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceDamageWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceDamageParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPenaltyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanStickPlayersToWall: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickPlayersToWallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArrowCamSettings ArrowCamSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldHitAngleRange WorldHitAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldHitStartPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldHitStopPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRanges AIRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSignificanceLevel Significance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FInventoryItemState State;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EInventoryItemSlot Slot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TornOffName, meta=(AllowPrivateAccess=true))
    FReplicated_FName TornOffName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Int32 InvocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FirstPersonTransformRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ThirdPersonTransformRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bDropOffOnCharacterHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemDisplayInfo DisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InventoryItemAKEvent_Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InventoryItemAKEvent_Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InventoryItemAKEvent_ImpactThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleCryOverrideAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupItemSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupManyItemSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileSounds ProjectileSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponMaterialSoundConfig WeaponActionMaterials;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationSetChanged OnAnimationSetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddedToInventoryChanged OnAddedToInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnerChanged OnOwnerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDropped OnDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDropped OnThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDropped OnPreThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnFakeClient OnSpawnFakeClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetAttached OnSetAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleCryTriggered OnBattleCryTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileHitEvent OnProjectileHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFakeClientAttached OnFakeClientAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float GlobalLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SwingWindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponTag CustomizationWeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSoundPolicy ItemSoundPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCustomizationApplied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParryHitLocation ParryHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeLitOnFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStartOnFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOnFire, meta=(AllowPrivateAccess=true))
    uint8 bIsOnFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSlashCounteredByStab: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSpecialStabAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSpecialVerticalAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSpecialIgnoreIsFacingTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanFistsParry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeClientBlendParams FakeClientBlendParams;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ProjectileMovementInitiator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundSwitchEntry RecentAttackReleaseWeaponActionSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* AttachedAmmoItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetOnFire OnSetOnFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetOffFire OnSetOffFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection NoveltyScore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResetToTransform, meta=(AllowPrivateAccess=true))
    FReplicated_FResetToTransform ResetToTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Drop, meta=(AllowPrivateAccess=true))
    FReplicated_FReplicateDrop ReplicateDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProjectileHit, meta=(AllowPrivateAccess=true))
    FReplicated_FProjectileHitParams ReplicatedProjectileHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugPreviousLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryAttachPointInfo NoAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryAttachPointInfo DefaultPrimaryAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryAttachPointInfo DefaultOffHandAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponTracers* CurrentWeaponTracers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPendingHiddenInGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMatchStateHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAnimating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AddedToInventory, meta=(AllowPrivateAccess=true))
    uint8 AddedToInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasThrown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlacedInWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldAttachRagdoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFakeClientStickPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AttachRadollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreviousArmBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreviousComponentTrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrevAnimPercent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipped OnEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUseItem OnStartUseItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUseItem OnUseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ATBLCharacter*> BlacklistedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimTimingProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* FireAmmoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimulatedProjectile SimulatedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SkeletalMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DefaultShieldCollisionRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacterBase*> FakeClientCollisionEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacterBase> CarriedCharacter;
    
public:
    AInventoryItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisualization(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartSimulatedProjectile(int32 AttackID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowWIPInUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldDropOnDowned();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCustomizePlacedInWorldItem(ATBLCharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAttachRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void SetupHapticsForPS5OnSpawningAttachment(AController* InController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUnequipped();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStackCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetRecentAttackReleaseWeaponActionSwitch(FSoundSwitchEntry Entry);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingHiddenInGame(bool NewBPendingHiddenInGame);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideLifeSpan(bool EnableOverride, float NewOverrideLifespan);
    
    UFUNCTION(BlueprintCallable)
    void SetOnFire();
    
    UFUNCTION(BlueprintCallable)
    void SetOffFire();
    
    UFUNCTION(BlueprintCallable)
    void SetInactive();
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float Health);
    
    UFUNCTION(BlueprintCallable)
    void SetDamagedState(EInventoryItemDamagedState NewDamagedState);
    
    UFUNCTION(BlueprintCallable)
    void SetAddedToInventory(bool inAddedToInventory);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxStackCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetItemToTransform(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlacklistedPawn(ATBLCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void ReloadThrownWeapon();
    
    UFUNCTION(BlueprintCallable)
    void PlayImpactEvent(const FSoundSwitchEntry SoundSwitch);
    
    UFUNCTION(BlueprintCallable)
    void PlayEquipAnimation();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayActionEvent(const FSoundSwitchEntry SoundSwitch);
    
    UFUNCTION(BlueprintCallable)
    void PerformFinishedMovementOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OverridePickupEvent(ATBLCharacter* Character, bool bGiveWeapon, bool bIsAutoPickup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWasParried(ATBLCharacter* ParryingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnUseItemEnded(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequipComplete(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnUnequipCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UseFireAmmo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TornOffName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StackCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResetToTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProjectileHit();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MountedItemParent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOnFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthValue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Drop();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AddedToInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileHitTarget(FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileHit(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileBounce(FHitResult Hit, bool bParried);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayActionEvent(const FSoundSwitchEntry SoundSwitch);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupEnded(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeleeSuccess(ATBLCharacter* DamagedCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerStateReplicated(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnFakeClientProjectileHit(const FHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEquipComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipCombatStateEnd(AActor* Actor, FName CombatState, const FAttackInfo& EventAttackInfo, UCombatState* CombatStateBP);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(FInventoryItemDamagedParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCosmeticProjectilePenetration(FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackInterrupted(int32 AttackID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyWeaponDetach(UTBLCharacterAnimInstance* AnimBP);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyWeaponAttach(UTBLCharacterAnimInstance* AnimBP);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyUseItem(UTBLCharacterAnimInstance* AnimBP);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastOnAddToInventoryItemPool();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastFastSharedReplication(const FFastSharedProperties_InventoryItem& Properties);
    
    UFUNCTION(BlueprintCallable)
    void LogShieldInfo(const FString& LogText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTwoHandedWeapon();
    
    UFUNCTION(BlueprintCallable)
    bool IsSimulatingPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDualWieldOffhandEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAddedToInventory();
    
    UFUNCTION(BlueprintCallable)
    bool IsAbilityMultiAttack(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStackCountOnSpawn(ATBLCharacter* CharacterOwner);
    
    UFUNCTION(BlueprintCallable)
    void InitializeProjectileMovement(AActor* Initiator, float InitialSpeed, bool bFakeClient);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeGoreHead(ATBLCharacter* Character, FGoreHeadParams Params, FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void InitDebugPreviousLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UShapeComponent* GetTeamProjectileCollision() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStackCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpecialAttackWindupSwitchOverride(FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetShieldCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectilePenetration* GetProjectilePenetrationConfig();
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetPhysicsMesh() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPendingHiddenInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacter* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    EWeaponMaterial GetMaterialByWeaponAction(bool IsAttacking, bool IsDefending, FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEquippableOnHorse();
    
    UFUNCTION(BlueprintCallable)
    AInventoryItem* GetDualWieldOffhand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemDisplayInfo GetDisplayInfoForFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageSourcePenetration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDamageSourceName(FText& NameText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacterBase* GetCarriedCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseDamage(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAttachRagdollParams(FAttachRagdollParams& AttachRagdollParams, ATBLCharacter* Character, const FDeathDamageTakenEvent& DamageEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetAttachRagdollComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishUnequippingOnAnimNotify(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void EventUsePressed(APawn* Pawn, UInteractableComponent* InteractableComponent);
    
    UFUNCTION(BlueprintCallable)
    void EnableCollisionForFakeClient(ATBLCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    bool DualWieldShouldUseBothWeaponsForAttack(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void DisableCollisionForFakeClient();
    
    UFUNCTION(BlueprintCallable)
    void DestroyFakeClient();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientToBeEquipped();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnItemUnequipped();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnItemEquipped(AActor* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void CheckStickPlayersToWall(ATBLCharacter* KilledChar);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseItem();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPickup(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CannotAutoPickup(APawn* Pawn);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastAttachRagdoll(FVector AttachLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void BounceOnProjectileHit(const FHitResult& HitResult, AInventoryItem* BlockingItem, float InBounceVelocityModifier);
    
    UFUNCTION(BlueprintCallable)
    void AttachSimulatedProjectileOnKill(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyImpulseToGoreHead(FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void AddToStackCount(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActors(AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    void AddBlacklistedPawn(ATBLCharacter* Player);
    
    
    // Fix for true pure virtual functions not being implemented
};

