#include "LoadoutSelection.h"
#include "Templates/SubclassOf.h"

TSubclassOf<AInventoryItem> ULoadoutSelection::GetRandomItemForSlot(EInventoryItemSlot Slot) {
    return NULL;
}

TArray<TSubclassOf<AInventoryItem>> ULoadoutSelection::GetItemSelectionBySlot(EInventoryItemSlot Slot, bool bOnPickup) {
    return TArray<TSubclassOf<AInventoryItem>>();
}

TSubclassOf<AInventoryItem> ULoadoutSelection::GetItemForSlot(EInventoryItemSlot Slot, int32 Index) {
    return NULL;
}

TArray<EWeaponTag> ULoadoutSelection::GetAllItemWeaponTagsFromLoadout() {
    return TArray<EWeaponTag>();
}

ULoadoutSelection::ULoadoutSelection() {
    this->bSpawnFists = true;
}

