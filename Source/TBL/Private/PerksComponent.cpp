#include "PerksComponent.h"

void UPerksComponent::RemoveTemporaryPerk(ETemporaryPerkType TempPerkType) {
}

void UPerksComponent::OnStartHeal(AActor* HealedActor, EHealingSource HealingSource) {
}

void UPerksComponent::OnPawnRevived(APawn* RevivedPlayer, APawn* RevivorPlayer) {
}

void UPerksComponent::OnKilled(const FDeathDamageTakenEvent& Event) {
}

bool UPerksComponent::HasPerk(EPerkType PerkType) const {
    return false;
}

void UPerksComponent::ApplyHelperBonus() {
}

void UPerksComponent::AddTemporaryPerk(ETemporaryPerkType TempPerkType) {
}

UPerksComponent::UPerksComponent() {
    this->PerksDataTable = NULL;
    this->TemporaryPerksDataTable = NULL;
    this->HealSpeed = 0.00f;
    this->HealCurve = NULL;
    this->BackstabAngle = 60.00f;
    this->OwnerCharacter = NULL;
    this->CurrentSubclass = NULL;
    this->CurrentClass = NULL;
    this->EagerBonusDamage = 1.00f;
    this->SneakyBonusDamage = 1.00f;
    this->SapperBonusDamage = 1.00f;
    this->SniperBonusDamage = 0.00f;
    this->OneHandWeaponSpeedBonus = 0.00f;
    this->HelperHealthBonus = 0.00f;
    this->bHasSprintShove = false;
    this->bHasSprintAttack = false;
    this->bHasSprintCharge = false;
    this->bHasEagerBonus = false;
    this->bHasSneakyBonus = false;
    this->bHasSapperBonus = false;
    this->bHasSniperBonus = false;
}

