#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "ActionContext.h"
#include "ArmHitInfo.h"
#include "AttachRagdollBlendParams.h"
#include "AttachedRagdoll.h"
#include "AttachedSmoothing.h"
#include "AttackInfo.h"
#include "BlendParams.h"
#include "Camera1PBlendParams.h"
#include "CharacterDisplayInfo.h"
#include "CinematicAllowedControlDelegate.h"
#include "CinematicRestrictedControlDelegate.h"
#include "ClashEventReplicated.h"
#include "CustomizationContext.h"
#include "DamageTakenEvent.h"
#include "DamageTakenEventCompressed.h"
#include "DeathDamageTakenEvent.h"
#include "DebugMovementReplication.h"
#include "EAudioAutoVOType.h"
#include "EAudioClassType.h"
#include "EAudioPersonalityType.h"
#include "ECharacterClass.h"
#include "ECharacterClassType.h"
#include "EConditionType.h"
#include "EEquippedHand.h"
#include "EFaction.h"
#include "EKillReason.h"
#include "ERadialVOMenuPage.h"
#include "EarlyHitResult.h"
#include "FacingTargetParams.h"
#include "FastSharedProperties_TBLCharacter.h"
#include "HitActorWithItemInfo.h"
#include "HitWorldParams.h"
#include "HorseLookAtParams.h"
#include "InteractableSettings.h"
#include "InventoryItemEquippedDelegate.h"
#include "LastSightCheckInfo.h"
#include "LockMeshBlendOutParams.h"
#include "LockMeshRotationState.h"
#include "MatchStateListenerInterface.h"
#include "MountRootBlendParams.h"
#include "OnAbleToHealChangedDelegate.h"
#include "OnAnimationSetChangedDelegate.h"
#include "OnBeingRevivedByChangedSignatureDelegate.h"
#include "OnCameraChangedDelegate.h"
#include "OnCarryableAnimationEventDelegate.h"
#include "OnCarryableCharacterEventDelegate.h"
#include "OnClashDelegate.h"
#include "OnClientNotifyKilledDelegate.h"
#include "OnClientNotifySuicideDelegate.h"
#include "OnDamageEventDelegate.h"
#include "OnDismountDelegate.h"
#include "OnDismountPressedDelegate.h"
#include "OnFallDamageEventDelegate.h"
#include "OnFreezeRagdollPhysicsDelegate.h"
#include "OnHealedByLocalPlayerDelegate.h"
#include "OnHitWorldDelegate.h"
#include "OnInteractableFocusedDelegate.h"
#include "OnInteractableLostFocusDelegate.h"
#include "OnMeleeSuccessDelegate.h"
#include "OnMountDelegate.h"
#include "OnParryEventDelegate.h"
#include "OnPlayEmoteDelegate.h"
#include "OnPlayerMeshChangedDelegate.h"
#include "OnPossessedSignatureDelegate.h"
#include "OnProjectileBeginPlayDelegate.h"
#include "OnRepCharacterPlayerStateDelegate.h"
#include "OnRootMotionChangedDelegate.h"
#include "OnSetFirstPersonDeathCameraDelegate.h"
#include "OnSetRagdollPhysicsDelegate.h"
#include "OnSetThirdPersonDeathCameraDelegate.h"
#include "OnShowInGameMenuDelegateDelegate.h"
#include "OnSpecialItemAbilitySetDelegate.h"
#include "OnStaminaCostFailedDelegate.h"
#include "OnStartHealDelegate.h"
#include "OnStatsComponentFocusedDelegate.h"
#include "OnStatsComponentLostFocusDelegate.h"
#include "OnUnderCrosshairChangedDelegate.h"
#include "OnWasHitEarlyDelegate.h"
#include "ParryEventReplicated.h"
#include "ParryEventState.h"
#include "PersonalityEmoteTableRow.h"
#include "PlayInventoryAnimationDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "ReplicationPredictionState.h"
#include "SetOnHorseDelegate.h"
#include "SoundSwitchEntry.h"
#include "SpecialItemReplicated.h"
#include "SwatchSelection.h"
#include "TBLCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "ThirdPersonCameraParams.h"
#include "TutorialLocationBlendParams.h"
#include "TutorialLookAtParams.h"
#include "TutorialPlayerControlParams.h"
#include "VOTracker.h"
#include "TBLCharacter.generated.h"

class AActor;
class AController;
class AHorse;
class AInventoryItem;
class APawn;
class ASpawner;
class ATBLCharacter;
class ATBLPlayerController;
class ATBLPlayerState;
class ATBLSpectatorPawn;
class ATBLTeam;
class UAbilitiesComponent;
class UActorComponent;
class UAkAudioEvent;
class UAkComponent;
class UBehaviorTree;
class UCameraComponent;
class UCombatState;
class UCombatStateComponent;
class UCombatStateQueue;
class UCombatStateSet;
class UCombatStateSynchronization;
class UConditionsComponent;
class UCurveFloat;
class UCustomizationComponent;
class UDamageSource;
class UFireSourceComponent;
class UFollowMasterSkeletalMeshComponent;
class UHeadlookComponent;
class UInteractableComponent;
class UInventory;
class ULoadoutSelection;
class UMovementDebugger;
class UMovementModifierComponent;
class UParryComponent;
class UPerksComponent;
class UPrimitiveComponent;
class UProgressionSpec;
class UPushingComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USpecialItemAbility;
class UStatsComponent;
class UTeamCapturePointComponent;

UCLASS(Blueprintable)
class TBL_API ATBLCharacter : public ATBLCharacterBase, public IVisualLoggerDebugSnapshotInterface, public IReplicatedSubobjectInterface, public IGenericTeamAgentInterface, public IMatchStateListenerInterface, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDisplayInfo DisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioClassType::Type> AudioClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterClass PawnClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnlineXpStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProgressionSpec* ClassProgressionSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitiesComponent* Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHeadlookComponent* HeadlookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasedMovementInfo LastReplicatedBasedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RandomSeed, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LockMeshRotation, meta=(AllowPrivateAccess=true))
    FLockMeshRotationState LockMeshRotationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RemoteViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseRemoteViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CinematicRestrictedControl, meta=(AllowPrivateAccess=true))
    uint8 bCinematicRestrictedControl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicRestrictedControlCameraLockAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CinematicRestrictedControlCameraLockID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpecialItemCharge, meta=(AllowPrivateAccess=true))
    FSpecialItemReplicated SpecialItemReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShouldCharacterBeHidden, meta=(AllowPrivateAccess=true))
    bool bShouldCharacterBeHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeingRevivedBy, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* BeingRevivedBy;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeingRevivedByChangedSignature OnBeingRevivedByChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFollowMasterSkeletalMeshComponent* FollowMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushingComponent* PushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Camera1PSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Camera3PSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCamera1PBlendParams Camera1PBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicationPredictionState PredictionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATBLCharacter>> CharacterSubclasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadoutSelection> LoadoutSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadoutSelection> OverrideLoadoutSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> EquippedCarryableOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackFromBehindAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectHighlightMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateSynchronization* CombatStateSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatStateSet> CombatStateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConditionsComponent* ConditionsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementModifierComponent* MovementModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerksComponent* PerksComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInventoryItem> LastWeaponHitBy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> LastCharacterHitBy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInventoryItem> WeaponAppliedBleed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessedSignature OnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitWorld OnHitWorld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeSuccess OnMeleeSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageEvent OnDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageEvent OnDamageCaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFallDamageEvent OnFallDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnParryEvent OnWasParried;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnParryEvent OnParrySuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClash OnClash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartHeal OnStartHeal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealedByLocalPlayer OnHealedByLocalPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaCostFailed OnStaminaCostFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraChanged OnCameraChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationSetChanged OnAnimationSetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemEquipped OnInventoryItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemEquipped OnInventoryItemUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemEquipped OnInventoryItemToBeEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbleToHealChanged OnAbleToHealChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMount OnMount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetOnHorse SetOnHorse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDismount OnDismount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableFocused OnInteractableFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableLostFocus OnInteractableLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableFocused OnUseableActorInteractableFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableFocused OnUseableActorInteractableLostFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsComponentFocused OnStatsComponentFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsComponentLostFocus OnStatsComponentLostFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnderCrosshairChanged OnUnderCrosshairChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetRagdollPhysics OnSetRagdollPhysics;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFreezeRagdollPhysics OnFreezeRagdollPhysics;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFreezeRagdollPhysics OnUnfreezeRagdollPhysics;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetFirstPersonDeathCamera OnSetFirstPersonDeathCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetThirdPersonDeathCamera OnSetThirdPersonDeathCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRootMotionChanged OnRootMotionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDismountPressed OnDismountPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarryableCharacterEvent OnCarryableCharacterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarryableAnimationEvent OnCarryableAnimationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayInventoryAnimation PlayInventoryAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMeshChanged OnPlayerMeshChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientNotifySuicide OnClientNotifySuicide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientNotifyKilled OnClientNotifyKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepCharacterPlayerState OnPlayerStateReplicated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWasHitEarly OnWasHitEarly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayEmote OnPlayEmote;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileBeginPlay OnProjectileBeginPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowInGameMenuDelegate OnShowInGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitActorWithItemInfo> HitActorWithWeaponInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HeadShotActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLCharacter*, FArmHitInfo> ArmHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientTracerHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ClientTracerHitBones;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ClientTracerHitComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLSpectatorPawn* SpectatingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAltAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThirdPersonCameraParams ThirdPersonCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThirdPersonCameraParams CurrentCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MountOrDismountCameraInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementDebugger* MovementDebugger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SKMesh3P;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, FLastSightCheckInfo> SightCacheMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GoreHeadRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSpawnedGoreHead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsForCustomizationMenu: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCustomizationMenuComponentsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationContext CustomizationContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Mesh1PLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Mesh1PRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPossessedTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAttackedSuccessfully;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadUsePressedStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GamepadUsePressedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* DebugProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* DebugFakeClientProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* DebugDroppedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugIgnoreAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCinematicsRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpawner* SpawnedAtSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_SpawnedAtSpawnComp, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnedAtSpawnComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventForwardSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> AttachedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMeshBlendOutParams LockMeshBlendInParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMeshBlendOutParams LockMeshBlendOutParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicRestrictedControl OnCinematicRestrictedControl;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicAllowedControl OnCinematicAllowedControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountRootBlendParams MountRootBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendParams MountControlBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageSource*> VOFriendlyDamageSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageSource*> AutoVONegativeDamageSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHelmetKnockedOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DeadCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EAudioAutoVOType::Type>, float> AutoVOProbabilty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialLocationBlendParams TutorialLocationBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialLookAtParams TutorialLookAtParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseLookAtParams HorseLookAtParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorseLookAtParams HorseOrientCameraOnBumpParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachedRagdoll AttachedRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachRagdollBlendParams AttachRagdollBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialItemAbility* SpecialItemAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialItemAbilitySet OnSpecialAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParryEventState LastParryEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* LastFiredProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMovementReplication DebugMovementReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHorse* KnockdownOffHorse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToVOExpiry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAllowedVOsWithinExpiry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VOCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleCryVOCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VOQueueEmoteWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParryComponent*> CachedParryComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* ClosestInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatsComponent* ClosestStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFireSourceComponent* ClosestFireSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* UseableActorInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableSettings InteractableSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadDismountPressedStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathAnimationToRagdollImpulse;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCrouchOverrideRecoveryAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathAnimationMontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathAnimationSectionName1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathAnimationSectionName3p;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Camera3PRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RagdollStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollCustomTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> PausedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PausedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PausedActorLifespans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> PausedTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PausedPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidPushRespawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapOutHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachedSmoothing AttachedSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreviousIsPlayingRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AutoPossessAIFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AutoPossessAIBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPossessAIStartCinematicRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSuicide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventSuicide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuicideTried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemovableBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverPerceiveCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FellOutOfWorldKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountTowardsKillsAndKnockdowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ConstructableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* LastController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerController* LastPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* LastPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOTracker VOTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LipSyncVOCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioAutoVOType::Type> CurrentAutoVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioAutoVOType::Type>> DeathFriendlyAudoVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAudioAutoVOType::Type>> AliveFriendlyAudoVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* CachedInteractableUseHeldComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, TWeakObjectPtr<AActor>> ConditionsAppliedByActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EAudioAutoVOType::Type>, float> AutoVODistanceByType;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTeamCapturePointComponent> CapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitForAttachToProjectileTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLTeam* PreviousTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialAutorun;
    
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, uint32> ParticleSystemsToPrepopulate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerNeedsHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> HealingItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> HealingSpecialItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLastAbleToHealCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeedsHealingThreshold;
    
public:
    ATBLCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void WasHitEarly(const FHitResult& Hit, ATBLCharacter* AttackingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void WasHitAfterDeath(FHitResult& Hit, ATBLCharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateThirdPersonCamera(float DeltaSeconds, bool bSpectator);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSpecialItemAbility(AInventoryItem* SpecialItem);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRagdoll(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayingVO(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParryAim(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateLockMeshRotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBlending(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttachedSmoothing(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnfreezeRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void TutorialPlayerControl(FTutorialPlayerControlParams Params);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAttachedItemMesh(USkeletalMeshComponent* ParentMesh);
    
    UFUNCTION(BlueprintCallable)
    void Suicide(EKillReason KillReason);
    
    UFUNCTION(BlueprintCallable)
    void StopRevive(ATBLCharacter* DownedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StopLowPriorityCharacterActionEvent();
    
    UFUNCTION(BlueprintCallable)
    void StopHighPriorityCharacterActionEvent();
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterActionEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartRevive(ATBLCharacter* DownedCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldIgnoreAI() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldClash(ATBLCharacter* InitiatorCharacter, ATBLCharacter* TargetCharacter, FVector ClashLocation) const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldBlockCharacter(ATBLCharacter* AttackingCharacter, ATBLCharacter* HitCharacter, FActionContext& Context) const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldAttackBeCountered(ATBLCharacter* AttackingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefenderItem) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupAI();
    
    UFUNCTION(BlueprintCallable)
    void SetThirdPersonDeathCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatingPawn(ATBLSpectatorPawn* NewSpectatingPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollPhysics();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDrunk(bool IsDrunk);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitialAutorun();
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAI(bool bNewIgnoreAI);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonDeathCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetDeathAnimationParameters(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicRestrictedControl(bool bRestricted);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseTornOffItem(TSubclassOf<AInventoryItem> ItemClass, FName TornOffName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseHeldStart(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseHeldRelease(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseHeldComplete(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUse(UInteractableComponent* Interactable, bool bIsAutoPickup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFireSource(UFireSourceComponent* NewFireSource);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(uint8 EmoteRowNum, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, uint8 EmotePlayingSeqNum, uint8 bIsOverrideEmote, uint8 EmoteType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayChickenEmote();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHitWorld(const FHitWorldParams& Params, float ClientTimeStamp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleOnCustomizationJobsEmptied();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterPostGameState();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDismountPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Revive(ATBLCharacter* DownedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmoteFromQueue(int32 EmoteId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveConstructableActor(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushRespawnState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessTurnAndLookInputRate(const TEnumAsByte<EAxis::Type> Axis, const float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessTurnAndLookInput(const TEnumAsByte<EAxis::Type> Axis, const float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayLowPriorityCharacterActionEvent(const FSoundSwitchEntry SoundSwitch) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayHighPriorityCharacterActionEvent(const FSoundSwitchEntry SoundSwitch);
    
    UFUNCTION(BlueprintCallable)
    void PlayEmoteFromServer(FName EmoteName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayEmote(FPersonalityEmoteTableRow Emote, ERadialVOMenuPage Page);
    
    UFUNCTION(BlueprintCallable)
    void PlayChickenEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayCharacterActionEvent(const FSoundSwitchEntry SoundSwitch, bool IsLocalPlayerInvolved) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayAutoVOFromServer(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType, bool SkipLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PlayAutoVO(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType);
    
    UFUNCTION(BlueprintCallable)
    void PauseCharacter(bool bPaused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamChanged(ATBLTeam* OwnerTeam);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecialItemCharge();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedAtSpawnComp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldCharacterBeHidden();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomSeed(int32 PreviousRandomInt);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LockMeshRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventorySlots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CinematicRestrictedControl();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_BeingRevivedBy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachToProjectile(AInventoryItem* Projectile);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileStopAfterDeath(const FHitResult& ImpactResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMeleeHitSuccess(AActor* HitActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableUsePawnChanged(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeAltWeightsState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEquippedItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FDamageTakenEvent& DamageEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomized();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConstructableActorKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnConstructableActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCausedDamage(const FDamageTakenEvent& DamageEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAttachedRagdollActorDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnApplyCondition(AActor* Actor, EConditionType Condition);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastFastSharedReplication(const FFastSharedProperties_TBLCharacter& Properties);
    
    UFUNCTION(BlueprintCallable)
    void LoserEnterPostGameState();
    
    UFUNCTION(BlueprintCallable)
    void KillWithHitParams(EKillReason KillReason, bool bSwitchedTeamsInLoadoutVolume, FHitResult HitResult, FVector HitDirection, AActor* Killer);
    
    UFUNCTION(BlueprintCallable)
    void Kill(EKillReason KillReason, bool bSwitchedTeamsInLoadoutVolume, AActor* Killer);
    
    UFUNCTION(BlueprintCallable)
    bool IsSprinting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialPawnClass() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnFadeOutEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnSubclass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpingToMountLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRagdoll() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInParryView(UParryComponent* ParryComp, const FTransform& BoxTransform, const FVector& BoxExtents, float IgnoreParryDepth) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInitialAutorun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingAltAttack(float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    bool IsFollowAnimationEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFacingTarget(const FHitResult& Hit, const FFacingTargetParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicRestrictedControl();
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterPaused() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterClassArchetype(ECharacterClass Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlocking(ATBLCharacter* AttackingCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrowCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptUse(FName NextCombatState);
    
    UFUNCTION(BlueprintCallable)
    void InitiateAbilityByName(FName AbilityName);
    
    UFUNCTION(BlueprintCallable)
    void HitWorldWithStats(FHitResult Hit, bool bParried);
    
    UFUNCTION(BlueprintCallable)
    void HitWorld(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HitClash(FHitResult& Hit, ATBLCharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable)
    void HideCharacterAndEquipment(bool bHide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCondition(EConditionType Condition) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCustomizationJobsEmptied();
    
    UFUNCTION(BlueprintCallable)
    FThirdPersonCameraParams GetThirdPersonCameraParams();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpecialItemAbility* GetSpecialItemAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAudioPersonalityType::Type> GetPersonalityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPawnMesh(bool WantFirstPerson) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterClass GetPawnClassType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterClass GetPawnClassArchetype() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UParryComponent*> GetParryComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNeedsHealingThreshold();
    
    UFUNCTION(BlueprintCallable)
    AController* GetLastController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractableComponent* GetFocusedInteractable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFacingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedItemByHand(EEquippedHand Hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInventoryItem*> GetEquippedInventoryItems() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDeathTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCurrentMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInventoryItem*> GetCurrentAttackingWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatStateComponent* GetCombatStateComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static ECharacterClassType GetCharacterClassType(ECharacterClass Type);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCharacterClassAudioSwitch(TEnumAsByte<EAudioClassType::Type> ClassType, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static ECharacterClass GetCharacterClassArchetype(ECharacterClass Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAudioClassType::Type> GetCharacterAudioType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenterPlayArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraSocketLocation() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetBlockingInventoryItem(ATBLCharacter* AttackingCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattlecryActionEvent(UAkAudioEvent*& StartEvent, UAkAudioEvent*& StopEvent);
    
    UFUNCTION(BlueprintCallable)
    float GetAutoVODistanceSqrdByType(TEnumAsByte<EAudioAutoVOType::Type> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimationPercent() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAIObjectiveDebugString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAIObjectiveActors() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorWhoAppliedCondition(EConditionType ConditionApplied);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActionEvent(UAkAudioEvent*& StartEvent, UAkAudioEvent*& StopEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FellOutOfWorldTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoKeyEvent(FName ActionName, TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void DoKeyAxis(FName ActionName, float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCountTowardKillsAndKnockdowns() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawShield(ATBLPlayerController* DebugController);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawParryBox(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawCamera(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeathAnimationOverlap();
    
public:
    UFUNCTION(BlueprintCallable)
    void DamageWithHitParams(float Damage, FHitResult HitResult, FVector HitDirection, bool bLoseLimbCheat);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeInputAction(FName ActionName, TEnumAsByte<EInputEvent> InputType);
    
    UFUNCTION(BlueprintCallable)
    void ConditionAppliedByActor(EConditionType ConditionApplied, AActor* ConditionCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeleportTo(FVector vecTargetPos, FRotator vecTargetRot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientSuicideReceived(FDamageTakenEventCompressed DamageEventCompressed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientSetCustomizationSwatches(const TArray<FSwatchSelection>& Swatches);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReliableNotifySuicide(EKillReason KillReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugString(FVector Location, const FString& Text, FColor Clr, float Duration, float FontScale);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugSphere(FVector Center, float Radius, int32 Segments, FColor Clr, bool bPersistentLines);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugPose(ATBLCharacter* Character, FColor Clr);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugPoint(FVector Location, float Size, FColor Clr, bool bPersistentLines, float Lifetime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugLine(FVector LineStart, FVector LineEnd, FColor Clr, bool bPersistentLines, float Lifetime, float Thickness);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugCapsule(FVector Center, float HalfHeight, float Radius, FColor Color);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugBox(FVector Center, FVector Box, FTransform Transform, FColor Color, bool bPersistentLines, float Lifetime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugArrow(FVector LineStart, FVector LineEnd, FColor Clr, bool bPersistentLines, float Lifetime, float Thickness);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientApplyCondition(EConditionType Condition);
    
    UFUNCTION(BlueprintCallable)
    void ClearTutorialPlayerControl();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckTeamCollision(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void CarryableCharacterEvent(FName EventName, ATBLCharacter* ParentCharacter);
    
    UFUNCTION(BlueprintCallable)
    void CarryableAnimationEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintShove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprintAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanRevive(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFullSprint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanClash() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastWasHitEarly(const FEarlyHitResult& EarlyHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPauseCharacter(bool bPaused);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastParryEvent(AActor* Target, FParryEventReplicated ParryEventReplicated);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnHealedByLocalPlayer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastLoseHelmet();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BroadcastHitWorldWithStats(const FHitWorldParams& Params);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BroadcastHitWorld(const FHitWorldParams& Params);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDetachFromController();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastClashEvent(ATBLCharacter* Target, FClashEventReplicated ClashEventReplicated);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BroadcastCinematicRestrictControl();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BroadcastCinematicAllowControl();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BroadcastChickenEmote();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastCharacterEmote(uint8 EmoteRowNum, TEnumAsByte<EAudioPersonalityType::Type> PersonalityType, uint8 EmotePlayingSeqNum, uint8 EmoteRandomSeed, uint8 bIsOverrideEmote, uint8 EmoteType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BroadcastAutoVO(TEnumAsByte<EAudioAutoVOType::Type> AutoVoType, bool SkipLocalPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastAbleToHealIfChanged();
    
    UFUNCTION(BlueprintCallable)
    void AddConstructableActorToArray(AActor* NewActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddConstructableActor(AInventoryItem* CarryableItem, AActor* NewActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

