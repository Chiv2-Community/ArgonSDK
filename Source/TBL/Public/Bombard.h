#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "BombardStateChangedDelegate.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "EBombardState.h"
#include "LoadItemInterface.h"
#include "OnBombardDamagedMeshAppliedDelegate.h"
#include "OnBombardFireActionDelegate.h"
#include "OnBombardKilledDelegate.h"
#include "OnBombardRepairedDelegate.h"
#include "OnFuseStartedDelegate.h"
#include "ProjectileSounds.h"
#include "SiegeEngine.h"
#include "SiegeEngineDamageSounds.h"
#include "Templates/SubclassOf.h"
#include "Bombard.generated.h"

class AActor;
class AInventoryItem;
class APawn;
class ATBLCharacter;
class ATBLPlayerState;
class UAbilitiesComponent;
class UAkAudioEvent;
class UAnimInstance;
class UAnimationAsset;
class UBoxComponent;
class UInteractableComponent;
class UParticleSystem;
class UPhysicsAsset;
class UPrimitiveComponent;
class UPushingComponent;
class URepairableComponent;
class USceneComponent;
class USkeletalMesh;
class UStatsComponent;
class UTBLBombardAnimInstance;

UCLASS(Blueprintable)
class ABombard : public ASiegeEngine, public ILoadItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombardStateChanged OnBombardStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBombardKilled OnBombardKilled;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RecoilKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnLimitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchLoopSoundFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadedAmmoSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLoadFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FuseEndTime, meta=(AllowPrivateAccess=true))
    float FuseEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FuseEndTime, meta=(AllowPrivateAccess=true))
    float BombardRecoilCharacterVelocity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFuseStarted OnFuseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBombardFireAction OnBombardFireAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
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
    UAkAudioEvent* PlayPitchLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopPitchLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MountSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReadyToFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> FiringSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileSounds BombardProjectileSoundOverride;
    
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
    FOnBombardDamagedMeshApplied OnBombardDamagedMeshApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotationSpeed, meta=(AllowPrivateAccess=true))
    uint8 IsBeingRotated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AInventoryItem* BombardSiegeWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBombardRepaired OnRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotationPitch, meta=(AllowPrivateAccess=true))
    float RotationPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayUntilPushbackKnockdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleDestroyingBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawMuzzleExplosionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillPlayersInMuzzleExplosion;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BombardState, meta=(AllowPrivateAccess=true))
    EBombardState BombardState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicatedIsBroken;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> BlockedAutoLoadCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnRateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveForwardHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveBackHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingPitchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBackHeldTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> FuseInitiatorDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 InitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> LoadingComponentList;
    
public:
    ABombard();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBroken(bool bInBroken);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBombardState(EBombardState State);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartFuse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPitchInput(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedItem(AInventoryItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadyToFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationPitch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FuseEndTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BombardState(EBombardState PreviousState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReloadCollision(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPushableActivated(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedAmmoPorjectileMovementFinished();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnBombardFireAnimComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnBombardFireAnimBegin(UTBLBombardAnimInstance* AnimInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBombardStateChanged(EBombardState State, EBombardState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPackaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsBombardAmmo(AInventoryItem* Item) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetReloadCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetLoadVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBombardState GetBombardState() const;
    
    UFUNCTION(BlueprintCallable)
    void EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnFire();
    
    UFUNCTION(BlueprintCallable)
    bool CanLoad(AInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStartFire(const TArray<ATBLCharacter*>& KnockbackCharacters);
    
    UFUNCTION(BlueprintCallable)
    void BombardLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator);
    
    UFUNCTION(BlueprintCallable)
    void AddLogEntry(const FString& LogEntry);
    
    
    // Fix for true pure virtual functions not being implemented
};

