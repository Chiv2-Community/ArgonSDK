#include "CharacterSignificanceState.h"

FCharacterSignificanceState::FCharacterSignificanceState() {
    this->Significance = ECharacterSignificanceLevel::Hidden;
    this->bNearFrustum = false;
    this->bWantsSignificanceUpdate = false;
    this->VisualizationRadius = 0.00f;
}

