#include "AkSurfaceReflectorSetComponent.h"

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent() {
    this->bEnableSurfaceReflectors = true;
    this->AcousticPolys.AddDefaulted(6);
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
    this->MaxRelevantReflectorSets = 12;
}

