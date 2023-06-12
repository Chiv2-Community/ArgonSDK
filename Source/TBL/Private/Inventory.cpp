#include "Inventory.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UInventory::UnequipCustomizationItem() {
}

void UInventory::UnequipAllItems(bool bImmediately, bool bPlayUnequip) {
}

void UInventory::SwitchToBrokenItem(AInventoryItem* Item) {
}

void UInventory::SwitchInventoryItem() {
}

void UInventory::StabPressed() {
}

void UInventory::SlashPressed() {
}

bool UInventory::ShowBandageRefillActors() const {
    return false;
}

void UInventory::SetObjectForItemLoad(UObject* Object) {
}

void UInventory::ServerSetObjectForItemLoad_Implementation(UObject* Object) {
}
bool UInventory::ServerSetObjectForItemLoad_Validate(UObject* Object) {
    return true;
}

void UInventory::ServerDebugSetAmmo_Implementation(int32 Ammo) {
}
bool UInventory::ServerDebugSetAmmo_Validate(int32 Ammo) {
    return true;
}

AInventoryItem* UInventory::RemoveItem(EInventoryItemSlot Slot, bool bEndAttack) {
    return NULL;
}

void UInventory::RefillItems(TArray<AInventoryItem*>& OutGrantedItems, const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill, bool RefillAllAmmoItems, bool UseStackCountFromItem, int32 StacksToAdd, bool GrantFullAmmo, EPickupEquipOptions EquipOptions) {
}

void UInventory::QueueWeaponFlourish() {
}

void UInventory::PickupTornOffItem(TSubclassOf<AInventoryItem> ItemClass) {
}

void UInventory::PickupItem(AInventoryItem* Item, int32 StackCountToAdd, EPickupEquipOptions EquipOptions, AActor* Initiator, bool bIgnoreStateCheck, bool bGiveWeapon) {
}

void UInventory::OverheadPressed() {
}

void UInventory::OnRep_IsUnequippingOnMount() {
}

void UInventory::OnRep_InventorySlots() {
}

void UInventory::OnRep_DualWieldOffhands() {
}

void UInventory::OnRep_AmmoItems() {
}

void UInventory::OnRemoveCondition(AActor* Actor, EConditionType Condition, AActor* ConditionRemover) {
}

void UInventory::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UInventory::OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void UInventory::OnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UInventory::OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

void UInventory::OnApplyCondition(AActor* Actor, EConditionType Condition) {
}

bool UInventory::IsShieldEquipped() {
    return false;
}

void UInventory::InventoryToggleMainHand() {
}

void UInventory::InventoryPrimary() {
}

void UInventory::InventoryPrevious() {
}

void UInventory::InventoryNext() {
}

void UInventory::InventoryKeyPressed(EInventoryItemSlot Slot) {
}

void UInventory::HorseBattleCryPressed() {
}

bool UInventory::HasMissingItemsToRefill(const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill) const {
    return false;
}

float UInventory::GetTimeSinceLastTriedBandage() const {
    return 0.0f;
}

void UInventory::GetRefillItemsToGrant(TMap<TSubclassOf<AInventoryItem>, int32>& ItemsToGrant, const TArray<TSubclassOf<AInventoryItem>>& ItemsToRefill, bool RefillAllAmmoItems, bool UseStackCountFromItem, int32 StacksToAdd) {
}

TSubclassOf<AInventoryItem> UInventory::GetNoveltyItemClass() {
    return NULL;
}

FName UInventory::GetKeybindName(EInventoryItemSlot Slot) {
    return NAME_None;
}

TArray<AInventoryItem*> UInventory::GetInventoryItemsBySlot(EInventoryItemSlot Slot) {
    return TArray<AInventoryItem*>();
}

AInventoryItem* UInventory::GetInventoryItemBySlot(EInventoryItemSlot Slot) {
    return NULL;
}

AInventoryItem* UInventory::GetEquippedWeapon() const {
    return NULL;
}

TArray<AInventoryItem*> UInventory::GetEquippedItems() const {
    return TArray<AInventoryItem*>();
}

AInventoryItem* UInventory::GetEquippedItemBySlot(EInventoryItemSlot Slot) const {
    return NULL;
}

AInventoryItem* UInventory::GetEquippedItemByHand(EEquippedHand Hand) const {
    return NULL;
}

AInventoryItem* UInventory::GetDualWieldOffhand(AInventoryItem* Item) {
    return NULL;
}

float UInventory::GetBattleCryHeldProgress() {
    return 0.0f;
}

AInventoryItem* UInventory::GetAmmoItem(AInventoryItem* Item) {
    return NULL;
}

TArray<AInventoryItem*> UInventory::GetAmmoInventoryItems() const {
    return TArray<AInventoryItem*>();
}

void UInventory::EquipCustomizationItem(AInventoryItem* Item) {
}

void UInventory::DropItemOnKilled(AInventoryItem* Item, const FDeathDamageTakenEvent& DamageEvent) {
}

void UInventory::DropItem(EInventoryItemSlot Slot, FDropItemParams Params, bool bDuringParryEvent) {
}

void UInventory::DropAllItems() {
}

void UInventory::DoBattlecryAbility() {
}

void UInventory::DoBattlecry() {
}

void UInventory::ClientUsedItem_Implementation(AInventoryItem* Item) {
}

void UInventory::ClientIsUnequippingOnMount_Implementation(bool OnMount) {
}

bool UInventory::CanSwitchInventoryItem(FName KeyBind) {
    return false;
}

void UInventory::BroadcastProjectilePenetratedPassiveShield_Implementation(AInventoryItem* Shield, AInventoryItem* Projectile, FVector HitLocation) {
}

void UInventory::BroadcastProjectileHitPassiveShield_Implementation(AInventoryItem* Shield, AInventoryItem* Projectile) {
}

void UInventory::BroadcastInventoryItemDamaged_Implementation(AInventoryItem* Item, FInventoryItemDamagedParams Params) {
}

void UInventory::ApplyBlockedDamage(FInventoryItemDamagedParams Params, AInventoryItem* BlockingItem) {
}

void UInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventory, SpawnedLoadout);
    DOREPLIFETIME(UInventory, InventorySlots);
    DOREPLIFETIME(UInventory, DualWieldOffhandItems);
    DOREPLIFETIME(UInventory, AmmoItems);
    DOREPLIFETIME(UInventory, bIsUnequippingOnMount);
}

UInventory::UInventory() {
    this->WeaponFists = NULL;
    this->WeaponKnife = NULL;
    this->InventoryPenaltyTable = NULL;
    this->EquippedPenaltyTable = NULL;
    this->BattleCryHeldTime = 0.00f;
    this->GamepadBattleCryHeldTime = 0.75f;
    this->GamepadJabHeldTime = 0.10f;
    this->GamepadInputDoubleTapWaitTime = 0.50f;
    this->GamepadInputWaitTime = 0.02f;
    this->ItemToUse = NULL;
    this->bLoadoutSpawned = false;
    this->ObjectForItemLoad = NULL;
    this->bDisableAttackInputs = false;
    this->BattleCryHeldStartTime = -1.00f;
    this->GamepadBattleCryHeldStartTime = 0.00f;
    this->GamepadBattleCryState = EGamepadBattleCryState::NONE;
    this->GamepadBattleCryPressedCount = 0;
    this->GamepadHorseBattleCryHeldStartTime = 0.00f;
    this->GamepadHorseBattleCryState = EGamepadBattleCryState::NONE;
    this->GamepadBattlecryStartInteractable = NULL;
    this->GamepadHorseBattleCryPressedCount = 0;
    this->GamepadWaitStabStartTime = 0.00f;
    this->GamepadWaitOverheadStartTime = 0.00f;
    this->GamepadJabHeldStartTime = 0.00f;
    this->GamepadWaitRightDPadStartTime = 0.00f;
    this->GamepadRightDPadPressedCount = 0.00f;
    this->ItemToReload = NULL;
    this->CustomizationItemToEquip = NULL;
    this->bWantsToEquipShield = false;
    this->bWantsToSuicide = false;
    this->SuicideReason = EKillReason::Damage;
    this->bIsEquippingItem = false;
    this->bIsAddingItem = false;
    this->bIsPickingUpItem = false;
    this->bWasKilled = false;
    this->bIsReloading = false;
    this->DashPressed_Ability = EWeaponAbilitySlotKey::Slash;
    this->HorseDashPressed_Ability = EWeaponAbilitySlotKey::Slash;
    this->ShovePressed_Ability = EWeaponAbilitySlotKey::Slash;
    this->KnifeClass = NULL;
    this->HandPriority.AddDefaulted(4);
    this->EquipPriority.AddDefaulted(4);
    this->NextPrevEquipExclusions.AddDefaulted(4);
    this->KeyPressedAbility.AddDefaulted(41);
    this->NoveltyItemClass = NULL;
    this->Faction = EFaction::Agatha;
    this->OffHandEquippedOnDrop = EInventoryItemSlot::MAX;
    this->SpawnedLoadoutSelection = NULL;
    this->LastTriedBandageWorldTimeSeconds = -1.00f;
    this->BandageRefillDisplayDuration = 4.00f;
}

