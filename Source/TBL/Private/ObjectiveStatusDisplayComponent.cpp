#include "ObjectiveStatusDisplayComponent.h"

UObjectiveStatusDisplayComponent::UObjectiveStatusDisplayComponent() {
    this->ShowProgress = false;
    this->bLocalPlayerInsideZone = false;
    this->DefaultObjectiveState = EObjectiveState::Disabled;
    this->DefaultProgress = 0.00f;
    this->DefaultOwningTeam = EFaction::Agatha;
    this->ActiveObjectiveIcon = NULL;
    this->ContestedObjectiveIcon = NULL;
}

