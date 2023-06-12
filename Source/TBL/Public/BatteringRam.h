#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "EDismountType.h"
#include "OnChargeChangedDelegate.h"
#include "SiegeEngine.h"
#include "Templates/SubclassOf.h"
#include "BatteringRam.generated.h"

class AActor;
class ATBLCharacter;
class UCombatState;
class UCombatStateComponent;
class UCombatStateQueue;
class UCombatStateSet;
class UCombatStateSynchronization;
class UCurveFloat;
class UInteractableComponent;
class UPhysicsAsset;
class UPushableComponent;
class USiegeMountPoint;

UCLASS(Blueprintable)
class ABatteringRam : public ASiegeEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateComponent* CombatStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateSynchronization* CombatStateSynchronization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatStateQueue* CombatStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatStateSet> CombatStateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* LeftInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* RightInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USiegeMountPoint* LeftMountPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USiegeMountPoint* RightMountPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChargePercent, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwoPlayerChargeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* StationaryPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PushablePhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushableComponent* PushableComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeChanged OnChargeChanged;
    
    ABatteringRam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargePercent();
    
    UFUNCTION(BlueprintCallable)
    void OnPushableActivated(bool bIsActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMount(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDismounted(ATBLCharacter* DismountedDriver, EDismountType DismountType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCharacters() const;
    
};

