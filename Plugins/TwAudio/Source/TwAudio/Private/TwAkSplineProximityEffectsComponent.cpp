#include "TwAkSplineProximityEffectsComponent.h"

void UTwAkSplineProximityEffectsComponent::EndOverlap(AActor* A1, AActor* A2) {
}

void UTwAkSplineProximityEffectsComponent::BeginOverlap(AActor* A1, AActor* A2) {
}

UTwAkSplineProximityEffectsComponent::UTwAkSplineProximityEffectsComponent() {
    this->ActivationDistance = 5.00f;
    this->EventOnEntry = NULL;
    this->EventOnExit = NULL;
    this->PlayEventOn = NULL;
    this->CollideWithPlayerCapsules = false;
}

