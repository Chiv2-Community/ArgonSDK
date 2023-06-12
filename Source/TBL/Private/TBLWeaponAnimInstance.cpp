#include "TBLWeaponAnimInstance.h"

void UTBLWeaponAnimInstance::StartWeaponAnimation() {
}

void UTBLWeaponAnimInstance::OnDropped(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform) {
}

void UTBLWeaponAnimInstance::OnAttackMontageSectionChanged(UAnimMontage* Montage, int32 NextSection) {
}

void UTBLWeaponAnimInstance::OnAnimationSetChanged(FName AnimSetName, FAnimationSetDataTable AnimInfo, AInventoryItem* InInventoryItem) {
}


void UTBLWeaponAnimInstance::EndWeaponAnimation() {
}

void UTBLWeaponAnimInstance::AnimNotify_ShowArrow() {
}

UTBLWeaponAnimInstance::UTBLWeaponAnimInstance() {
    this->InventoryItem = NULL;
    this->Is3p = false;
    this->IsAddedToInventory = false;
    this->IsEquipped = false;
    this->IsCarryable = false;
    this->IsLoaded = false;
    this->AnimationSetBase = NULL;
    this->AnimationSetBase1P = NULL;
    this->AnimationSetBase3P = NULL;
    this->ReloadStates.AddDefaulted(3);
}

