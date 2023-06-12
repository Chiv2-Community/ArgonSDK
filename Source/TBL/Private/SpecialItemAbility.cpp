#include "SpecialItemAbility.h"


void USpecialItemAbility::OnStartHeal(AActor* HealedActor, EHealingSource HealingSource) {
}

void USpecialItemAbility::OnRechargeTimer() {
}

void USpecialItemAbility::OnPawnRevived(APawn* RevivedPlayer, APawn* RevivorPlayer) {
}

void USpecialItemAbility::OnParrySuccess(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState) {
}

void USpecialItemAbility::OnKilled(const FDeathDamageTakenEvent& Event) {
}

void USpecialItemAbility::OnItemStackChanged(AInventoryItem* Item, int32 Delta) {
}

void USpecialItemAbility::OnEquippedItemsChanged() {
}

void USpecialItemAbility::OnDamageTaken(const FDamageTakenEvent& Event) {
}

void USpecialItemAbility::OnDamageCaused(const FDamageTakenEvent& Event) {
}

void USpecialItemAbility::IncreaseStackCount() {
}

int32 USpecialItemAbility::GetPerkBonus() const {
    return 0;
}

float USpecialItemAbility::GetMaxCharge() const {
    return 0.0f;
}

float USpecialItemAbility::GetCurrentCharge() const {
    return 0.0f;
}

void USpecialItemAbility::FullyRecharge() {
}

void USpecialItemAbility::DecreaseStackCount() {
}



void USpecialItemAbility::ApplyHelperBonus() {
}

USpecialItemAbility::USpecialItemAbility() {
    this->MaxCharge = 100.00f;
    this->SpecialItem = NULL;
    this->CurrentCharge = 0.00f;
    this->LastChargeType = ESpecialItemChargeType::Time;
    this->LastStackCount = 0;
    this->LastEquippedState = EEquippedState::Free;
    this->bIsUsing = false;
    this->OwnerCharacter = NULL;
}

