#include "MovementModifierComponent.h"

void UMovementModifierComponent::RemoveModifier(FName Modifier) {
}

bool UMovementModifierComponent::HasModifier(FName Modifier) {
    return false;
}

void UMovementModifierComponent::AddModifier(FName Modifier) {
}

UMovementModifierComponent::UMovementModifierComponent() {
    this->MovementModifierDataTable = NULL;
    this->SlopeAngle = 0.00f;
    this->TotalModifier = 1.00f;
    this->bDisableSprint = false;
    this->PreviousPhysMaterial = NULL;
    this->UphillMinAngle = 0.00f;
    this->DownhillMinAngle = 0.00f;
}

