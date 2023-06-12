#include "BaseCombatState.h"

void UBaseCombatState::ToggleReloadHint(bool Enable) {
}

void UBaseCombatState::RemoveReloadHint() {
}

void UBaseCombatState::Reload() {
}

bool UBaseCombatState::NeedToReload() const {
    return false;
}

void UBaseCombatState::ManualReload() {
}

float UBaseCombatState::GetStaminaPercent() const {
    return 0.0f;
}

void UBaseCombatState::DropHeavyObject() {
}

bool UBaseCombatState::DidHitInRelease() const {
    return false;
}

void UBaseCombatState::AddReloadHint() {
}

UBaseCombatState::UBaseCombatState() {
    this->CanReloadInState = false;
}

