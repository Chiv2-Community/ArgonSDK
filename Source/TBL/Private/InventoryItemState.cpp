#include "InventoryItemState.h"

FInventoryItemState::FInventoryItemState() {
    this->EquippedState = EEquippedState::Free;
    this->EquippedHand = EEquippedHand::Unequipped;
    this->AttachedState = EAttachedState::Free;
}

