#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleCryChargeUpdatedDelegate.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "EEquippedState.h"
#include "EHealingSource.h"
#include "ESpecialItemChargeType.h"
#include "OnSpecialItemEquipDelegate.h"
#include "OnSpecialItemUsedDelegate.h"
#include "ParryEventState.h"
#include "SpecialItemAbility.generated.h"

class AActor;
class AInventoryItem;
class APawn;
class ATBLCharacter;

UCLASS(Abstract, Blueprintable)
class USpecialItemAbility : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxCharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleCryChargeUpdated OnChargeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialItemEquip OnSpecialItemEquip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialItemUsed OnSpecialItemUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialItemUsed OnSpecialItemUseFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* SpecialItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpecialItemChargeType LastChargeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquippedState LastEquippedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLCharacter* OwnerCharacter;
    
public:
    USpecialItemAbility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseItem();
    
    UFUNCTION(BlueprintCallable)
    void OnStartHeal(AActor* HealedActor, EHealingSource HealingSource);
    
    UFUNCTION(BlueprintCallable)
    void OnRechargeTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnRevived(APawn* RevivedPlayer, APawn* RevivorPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnParrySuccess(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnItemStackChanged(AInventoryItem* Item, int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageCaused(const FDamageTakenEvent& Event);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncreaseStackCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPerkBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRecharge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecreaseStackCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattlecryAbilityStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattlecryAbilityEnd();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHelperBonus();
    
};

