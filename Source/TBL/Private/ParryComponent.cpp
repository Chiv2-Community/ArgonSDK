#include "ParryComponent.h"

UParryComponent::UParryComponent() {
    this->bParryTracers = false;
    this->bParryNonTracers = false;
    this->bParryImmediately = false;
    this->bCheckParryView = false;
    this->bIgnoreCombatStateCheck = false;
    this->UpperPitchTranslation = 0.00f;
    this->LowerPitchTranslation = 0.00f;
    this->PitchRotation = 0.00f;
    this->CrouchInterpSpeed = 10.00f;
    this->ParentComponent = NULL;
}

