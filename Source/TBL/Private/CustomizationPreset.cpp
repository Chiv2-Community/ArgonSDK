#include "CustomizationPreset.h"

FCustomizationPreset::FCustomizationPreset() {
    this->PlayerClass = EAudioClassType::Archer;
    this->PlayerTeam = EFaction::Agatha;
    this->OverridedCustomization = NULL;
    this->DefaultCustomization = NULL;
}

