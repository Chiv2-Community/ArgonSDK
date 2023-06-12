#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "CatapultChargePercentChangedDelegate.h"
#include "CatapultFireNoDriverDelegate.h"
#include "CatapultStateChangedDelegate.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "ECatapultState.h"
#include "LoadItemInterface.h"
#include "OnCatapultDamagedMeshAppliedDelegate.h"
#include "OnCatapultKilledDelegate.h"
#include "OnCatapultRepairedDelegate.h"
#include "ProjectileSounds.h"
#include "SiegeEngine.h"
#include "SiegeEngineDamageSounds.h"
#include "Templates/SubclassOf.h"
#include "Catapult.generated.h"

class AActor;
class AInventoryItem;
class APawn;
class ATBLCharacter;
class ATBLPlayerState;
class UAbilitiesComponent;
class UAkAudioEvent;
class UAnimInstance;
class UAnimationAsset;
class UInteractableComponent;
class UParticleSystem;
class UPhysicsAsset;
class UPrimitiveComponent;
class UPushingComponent;
class URepairableComponent;
class USceneComponent;
class USkeletalMesh;
class UStatsComponent;

UCLASS(Blueprintable)
class ACatapult : public ASiegeEngine, public ILoadItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatapultStateChanged OnCatapultStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatapultFireNoDriver OnCatapultFireNoDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCatapultKilled OnCatapultKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* MountInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitiesComponent* Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushingComponent* PushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairableComponent* Repairable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChargePercent, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatapultChargePercentChanged OnChargePercentChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeIncrements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChargeToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadedAmmoSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLoadFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceYawRotationLimitOnCatapult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnwinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousChargeIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextChargeIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LoadedAmmo, meta=(AllowPrivateAccess=true))
    AInventoryItem* LoadedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AInventoryItem* LastLoadedAmmo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLPlayerState> LoadedAmmoInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LoadedAmmo, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> WhitelistAmmoItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> AttachedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ItemLoadedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayReloadLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopReloadLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayTurnLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTurnLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MountSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReadyToFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> FiringSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileSounds CatapultProjectileSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSiegeEngineDamageSounds DamageSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* HealthyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DamagedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BrokenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BrokenParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* BrokenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* StationaryPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PushablePhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DestroyedPhysAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCatapultDamagedMeshApplied OnCatapultDamagedMeshApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotationSpeed, meta=(AllowPrivateAccess=true))
    uint8 IsBeingRotated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCatapultRepaired OnRepaired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LastAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HorizLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileSounds LoadedAmmoProjectileBackupSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> OverlappingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CatapultState, meta=(AllowPrivateAccess=true))
    ECatapultState CatapultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Broken, meta=(AllowPrivateAccess=true))
    bool bReplicatedIsBroken;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> BlockedAutoLoadCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 InitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> LoadingComponentList;
    
public:
    ACatapult();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCatapultState(ECatapultState State);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBroken(bool bInBroken);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadPressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFirePressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedItem(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ReloadReleased();
    
    UFUNCTION(BlueprintCallable)
    void ReloadPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadyToFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargePercent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CatapultState(ECatapultState PreviousState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Broken();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadCollision(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPushableActivated(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnItemPickup(AInventoryItem* Item, bool IsAddedToInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Amount, AActor* Initiator);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FDamageTakenEvent& Event);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnCatapultStateChanged(ECatapultState State, ECatapultState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPackaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsCatapultRock(AInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetSpoonCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetReloadCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetLoadVolume();
    
    UFUNCTION(BlueprintCallable)
    void EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void CatapultLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanLoad(AInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastFireNoDriver();
    
    
    // Fix for true pure virtual functions not being implemented
};

