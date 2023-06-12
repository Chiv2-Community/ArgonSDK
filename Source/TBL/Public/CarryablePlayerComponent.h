#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DeathDamageTakenEvent.h"
#include "ProjectileHitParams.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_AInventoryItem.h"
#include "Templates/SubclassOf.h"
#include "CarryablePlayerComponent.generated.h"

class AActor;
class AInventoryItem;
class APawn;
class ATBLCharacter;
class ATBLCharacterBase;
class UInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCarryablePlayerComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> CarryableItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeCarryRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeThrownRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeLandingYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPickupFromDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanKillOnThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRevive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarryableItem, meta=(AllowPrivateAccess=true))
    FReplicated_AInventoryItem CarryableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacterBase* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* ParentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HorizLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeldByEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnRootTransformUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsedFakedClientThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsedFakedClientDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedRVOEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedOwnerItemDroppedTransform;
    
public:
    UCarryablePlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartPickup();
    
    UFUNCTION(BlueprintCallable)
    void OnUseReleased(APawn* Pawn, float UseTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUseHeld(APawn* Pawn, float UseTime, UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void OnUse(APawn* Pawn, UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void OnThrown(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnFakeClient(AInventoryItem* FakeClient);
    
    UFUNCTION(BlueprintCallable)
    void OnSetAttached(bool bAttached);
    
    UFUNCTION(BlueprintCallable)
    void OnRootTransformUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarryableItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPreThrown(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnFakeClientProjectileHit(const FProjectileHitParams& HitParams);
    
    UFUNCTION(BlueprintCallable)
    void OnDropped(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryableItemDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryableAnimationEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    bool CanPickup(APawn* Pawn);
    
    
    // Fix for true pure virtual functions not being implemented
};

