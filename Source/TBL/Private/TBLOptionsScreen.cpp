#include "TBLOptionsScreen.h"

void UTBLOptionsScreen::UserRevertedResolution() {
}

void UTBLOptionsScreen::UserDeclinedFOVChange() {
}

void UTBLOptionsScreen::UserDeclinedCrossplayChange() {
}

void UTBLOptionsScreen::UserConfirmedResolution() {
}

void UTBLOptionsScreen::UserConfirmedFOVChange() {
}

void UTBLOptionsScreen::UserConfirmedCrossplayChange() {
}

void UTBLOptionsScreen::SetOverallScalabilityLevelWithAuto(int32 Value) {
}

void UTBLOptionsScreen::SaveAll() {
}

void UTBLOptionsScreen::ResetAll() {
}

void UTBLOptionsScreen::OnGameUserSettingsUINeedsUpdate() {
}

void UTBLOptionsScreen::OnGameExit() {
}

int32 UTBLOptionsScreen::GetOverallScalabilityLevelWithAuto() const {
    return 0;
}

void UTBLOptionsScreen::ApplyAll() {
}

UTBLOptionsScreen::UTBLOptionsScreen() {
    this->ResolutionsComboBox = NULL;
    this->WindowModeComboBox = NULL;
    this->DLSSComboBox = NULL;
    this->XESSComboBox = NULL;
    this->IntelVRSComboBox = NULL;
    this->CrossplayCheckbox = NULL;
    this->FOVSlider = NULL;
}

