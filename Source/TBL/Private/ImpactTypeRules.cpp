#include "ImpactTypeRules.h"

FImpactTypeRules::FImpactTypeRules() {
    this->LowSpeedInteraction = ECollisionInteraction::Knockoff;
    this->MediumSpeedInteraction = ECollisionInteraction::Knockoff;
    this->HighSpeedInteraction = ECollisionInteraction::Knockoff;
}

