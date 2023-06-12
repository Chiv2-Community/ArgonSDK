#include "BurnableComponent.h"

void UBurnableComponent::HandleOwnerDamageTaken(const FDamageTakenEvent& Event) {
}

float UBurnableComponent::GetTimeUntilBurnedDown() const {
    return 0.0f;
}

UBurnableComponent::UBurnableComponent() {
    this->FlammableStaticMeshComponentClass = NULL;
    this->SphereCollisionRadius = 100.00f;
    this->PercentHealth = 1.00f;
    this->ActorBoundingBoxTweak = 0.00f;
}

