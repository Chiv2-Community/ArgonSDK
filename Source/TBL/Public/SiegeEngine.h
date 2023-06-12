#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "CatapultLoadedAmmoDelegate.h"
#include "CatapultReadyToFireDelegate.h"
#include "DamagerInterface.h"
#include "DeathDamageTakenEvent.h"
#include "EDismountType.h"
#include "EFaction.h"
#include "EResultCode.h"
#include "ESiegeEngineType.h"
#include "EWeaponAbilitySlotKey.h"
#include "MountBlendParams.h"
#include "OnDriverDismountDelegate.h"
#include "OnDriverMountDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "ReplicationPredictionState.h"
#include "TBLCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "TurnLimitSound.h"
#include "SiegeEngine.generated.h"

class AAIController;
class AAbilityInvocation;
class AActor;
class AController;
class AInventoryItem;
class APawn;
class ATBLCharacter;
class UAkComponent;
class UAnimationSet;
class UCombatState;
class UCombatStateComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASiegeEngine : public ATBLCharacterBase, public IReplicatedSubobjectInterface, public IDamagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicationPredictionState PredictionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> CharacterAnimationSet1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* DriverController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDriverMount OnDriverMount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDriverDismount OnDriverDismount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponAbilitySlotKey> DisableAbilitySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FireAbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnLimitSound TurnLimitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> SiegeInventoryItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AIAimHintLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* SiegeInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SiegeEngineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESiegeEngineType SiegeEngineType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatapultReadyToFire OnReadyToFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatapultLoadedAmmo OnLoadedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEmoteAnimations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Driver, meta=(AllowPrivateAccess=true))
    ATBLCharacter* ReplicatedDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction LastDriverFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMountCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDismountCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMountBlendParams MountBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToInitializeTBLCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadUsePressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SiegeMountPointList;
    
public:
    ASiegeEngine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UseKeyRepeat();
    
    UFUNCTION(BlueprintCallable)
    void UseKeyReleased();
    
    UFUNCTION(BlueprintCallable)
    void UseKeyPressed();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDismountPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTurnLockLimit(float DeltaTime, float DeltaYaw);
    
    UFUNCTION(BlueprintCallable)
    void OnRiderCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Driver();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDriverSetRagdollPhysics();
    
    UFUNCTION(BlueprintCallable)
    void OnDriverKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityError(AActor* Initiator, TEnumAsByte<EResultCode::Type> Code, AAbilityInvocation* Invocation, FName AttackName, TSubclassOf<AInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void MountPressed(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    UCombatStateComponent* GetSiegeEngineCombatStateComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetMinChargingToFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLoadedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetLastDriverFaction() const;
    
    UFUNCTION(BlueprintCallable)
    ATBLCharacter* GetDriver();
    
    UFUNCTION(BlueprintCallable)
    float GetChargingPercent();
    
    UFUNCTION(BlueprintCallable)
    void ForceDismount(EDismountType DismountType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FocusReleased();
    
    UFUNCTION(BlueprintCallable)
    void FocusPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void FireReleased();
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
    UFUNCTION(BlueprintCallable)
    void DismountReleased();
    
    UFUNCTION(BlueprintCallable)
    void DismountPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanMount(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSetRotationYaw(float NewRotationYaw);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastMount(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastInterpToMountLocation(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDismount(EDismountType DismountType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ArrowCamReleased();
    
    UFUNCTION(BlueprintCallable)
    void ArrowCamPressed();
    
    UFUNCTION(BlueprintCallable)
    void ArrowCamGamePadReleased();
    
    UFUNCTION(BlueprintCallable)
    void ArrowCamGamePadPressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

