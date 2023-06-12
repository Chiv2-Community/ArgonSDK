#include "BreakableComponent.h"

void UBreakableComponent::SetHealth(float InHealth) {
}

void UBreakableComponent::SetFriendlyTeam(EFaction InFriendlyTeam) {
}

void UBreakableComponent::Killed(const FDeathDamageTakenEvent& Event) {
}

void UBreakableComponent::HealthStatChanged(float Amount, AActor* Initiator) {
}

void UBreakableComponent::Damaged(const FDamageTakenEvent& Event) {
}

UBreakableComponent::UBreakableComponent() {
    this->StartingHealth = 100.00f;
    this->MaxHealth = 100.00f;
    this->FriendlyTeam = EFaction::None;
}

