#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AttackInfo.h"
#include "DeathDamageTakenEvent.h"
#include "DropItemParams.h"
#include "EConditionType.h"
#include "EEquippedHand.h"
#include "EFaction.h"
#include "EGamepadBattleCryState.h"
#include "EInventoryItemSlot.h"
#include "EKillReason.h"
#include "EPickupEquipOptions.h"
#include "EWeaponAbilitySlotKey.h"
#include "InventoryItemDamagedParams.h"
#include "KeyPressedParams.h"
#include "Loadout.h"
#include "OnAddedToInventoryChangedDelegate.h"
#include "OnBattleCryStartedDelegate.h"
#include "OnCharacterEquippedItemsChangedDelegate.h"
#include "OnDisabledAttackInputDelegate.h"
#include "OnEquippedItemsChangedDelegate.h"
#include "OnInventoryActionFailedDelegate.h"
#include "OnInventoryItemDamageStateChangedDelegate.h"
#include "OnInventoryItemDamagedDelegate.h"
#include "OnInventorySlotsUpdatedDelegate.h"
#include "OnItemStackChangedDelegate.h"
#include "OnMountingHorseDelegate.h"
#include "OnProjectileFinishedDelegate.h"
#include "OnProjectileHitPassiveShieldDelegate.h"
#include "OnProjectilePenetratedPassiveShieldDelegate.h"
#include "OnProjectileStartedDelegate.h"
#include "ReplicatedArray_AInventoryItemPtr.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "Templates/SubclassOf.h"
#include "WeaponAbilityGrant.h"
#include "Inventory.generated.h"

class AActor;
class AInventoryItem;
class UCombatState;
class UDataTable;
class UInteractableComponent;
class ULoadoutSelection;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventory : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedItemsChanged OnEquippedItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterEquippedItemsChanged OnCharacterEquippedItemsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> WeaponFists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> WeaponKnife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InventoryPenaltyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EquippedPenaltyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleCryHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadBattleCryHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadJabHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadInputDoubleTapWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadInputWaitTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileStarted ProjectileStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileFinished ProjectileStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemDamaged OnInventoryItemDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemDamageStateChanged OnInventoryItemDamageStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemStackChanged OnItemStackChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddedToInventoryChanged OnAddedToInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMountingHorse OnMountingHorse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventorySlotsUpdated OnInventorySlotsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleCryStarted OnBattleCryStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleCryStarted OnBattleCryFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryActionFailed OnInventoryActionFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileHitPassiveShield OnProjectileHitPassiveShield;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectilePenetratedPassiveShield OnProjectilePenetratedPassiveShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* ItemToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadoutSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLoadout SpawnedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ObjectForItemLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableAttackInputs: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisabledAttackInput OnDisabledAttackInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BattleCryHeldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadBattleCryHeldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGamepadBattleCryState GamepadBattleCryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GamepadBattleCryPressedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadHorseBattleCryHeldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGamepadBattleCryState GamepadHorseBattleCryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* GamepadBattlecryStartInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GamepadHorseBattleCryPressedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadWaitStabStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadWaitOverheadStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadJabHeldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadWaitRightDPadStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GamepadRightDPadPressedCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InventorySlots, meta=(AllowPrivateAccess=true))
    FReplicatedArray_AInventoryItemPtr InventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DualWieldOffhands, meta=(AllowPrivateAccess=true))
    FReplicatedArray_AInventoryItemPtr DualWieldOffhandItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AmmoItems, meta=(AllowPrivateAccess=true))
    FReplicatedArray_AInventoryItemPtr AmmoItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> ItemsToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* ItemToReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAbilityGrant> AbilitySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventoryItem* CustomizationItemToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsToEquipShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsToSuicide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKillReason SuicideReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsUnequippingOnMount, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bIsUnequippingOnMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquippingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAddingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPickingUpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWeaponAbilitySlotKey DashPressed_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWeaponAbilitySlotKey HorseDashPressed_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWeaponAbilitySlotKey ShovePressed_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> KnifeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAbilitySlotKey, FName> Keybinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EWeaponAbilitySlotKey> KeybindToSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EInventoryItemSlot> InventoryKeybindToSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquippedHand> HandPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> EquipPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> NextPrevEquipExclusions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemSlot> PreviousEquippedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyPressedParams> KeyPressedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> NoveltyItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryItemSlot OffHandEquippedOnDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadoutSelection* SpawnedLoadoutSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTriedBandageWorldTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BandageRefillDisplayDuration;
    
public:
    UInventory();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnequipCustomizationItem();
    
    UFUNCTION(BlueprintCallable)
    void UnequipAllItems(bool bImmediately, bool bPlayUnequip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchToBrokenItem(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void SwitchInventoryItem();
    
    UFUNCTION(BlueprintCallable)
    void StabPressed();
    
    UFUNCTION(BlueprintCallable)
    void SlashPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool ShowBandageRefillActors() const;
    
    UFUNCTION(BlueprintCallable)
    void SetObjectForItemLoad(UObject* Object);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetObjectForItemLoad(UObject* Object);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugSetAmmo(int32 Ammo);
    
protected:
    UFUNCTION(BlueprintCallable)
    AInventoryItem* RemoveItem(EInventoryItemSlot Slot, bool bEndAttack);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefillItems(TArray<AInventoryItem*>& OutGrantedItems, const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill, bool RefillAllAmmoItems, bool UseStackCountFromItem, int32 StacksToAdd, bool GrantFullAmmo, EPickupEquipOptions EquipOptions);
    
    UFUNCTION(BlueprintCallable)
    void QueueWeaponFlourish();
    
    UFUNCTION(BlueprintCallable)
    void PickupTornOffItem(TSubclassOf<AInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void PickupItem(AInventoryItem* Item, int32 StackCountToAdd, EPickupEquipOptions EquipOptions, AActor* Initiator, bool bIgnoreStateCheck, bool bGiveWeapon);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverheadPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUnequippingOnMount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventorySlots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DualWieldOffhands();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveCondition(AActor* Actor, EConditionType Condition, AActor* ConditionRemover);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnApplyCondition(AActor* Actor, EConditionType Condition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldEquipped();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InventoryToggleMainHand();
    
    UFUNCTION(BlueprintCallable)
    void InventoryPrimary();
    
    UFUNCTION(BlueprintCallable)
    void InventoryPrevious();
    
    UFUNCTION(BlueprintCallable)
    void InventoryNext();
    
    UFUNCTION(BlueprintCallable)
    void InventoryKeyPressed(EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void HorseBattleCryPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMissingItemsToRefill(const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetTimeSinceLastTriedBandage() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRefillItemsToGrant(TMap<TSubclassOf<AInventoryItem>, int32>& ItemsToGrant, const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill, bool RefillAllAmmoItems, bool UseStackCountFromItem, int32 StacksToAdd);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetNoveltyItemClass();
    
    UFUNCTION(BlueprintCallable)
    FName GetKeybindName(EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    TArray<AInventoryItem*> GetInventoryItemsBySlot(EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    AInventoryItem* GetInventoryItemBySlot(EInventoryItemSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInventoryItem*> GetEquippedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedItemBySlot(EInventoryItemSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedItemByHand(EEquippedHand Hand) const;
    
    UFUNCTION(BlueprintCallable)
    AInventoryItem* GetDualWieldOffhand(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    float GetBattleCryHeldProgress();
    
    UFUNCTION(BlueprintCallable)
    AInventoryItem* GetAmmoItem(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInventoryItem*> GetAmmoInventoryItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipCustomizationItem(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void DropItemOnKilled(AInventoryItem* Item, const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(EInventoryItemSlot Slot, FDropItemParams Params, bool bDuringParryEvent);
    
    UFUNCTION(BlueprintCallable)
    void DropAllItems();
    
    UFUNCTION(BlueprintCallable)
    void DoBattlecryAbility();
    
    UFUNCTION(BlueprintCallable)
    void DoBattlecry();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUsedItem(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIsUnequippingOnMount(bool OnMount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanSwitchInventoryItem(FName KeyBind);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastProjectilePenetratedPassiveShield(AInventoryItem* Shield, AInventoryItem* Projectile, FVector HitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastProjectileHitPassiveShield(AInventoryItem* Shield, AInventoryItem* Projectile);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastInventoryItemDamaged(AInventoryItem* Item, FInventoryItemDamagedParams Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyBlockedDamage(FInventoryItemDamagedParams Params, AInventoryItem* BlockingItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

