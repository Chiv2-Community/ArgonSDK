#include "TBLTitleScreen.h"

bool UTBLTitleScreen::ShouldUsePCStyleWelcomeScreen() const {
    return false;
}

bool UTBLTitleScreen::ShouldShowEgsDevLoginCredentials() const {
    return false;
}

void UTBLTitleScreen::RetryMaintenance() {
}

void UTBLTitleScreen::OnUserPressedStart(int32 ControllerIndex) {
}

void UTBLTitleScreen::OnUserPressedOfflineMode(int32 ControllerIndex) {
}

void UTBLTitleScreen::OnUserPressedLogin(int32 ControllerIndex, const FString& InEGSDevAuth_Address, const FString& InEGSDevAuth_Client) {
}

void UTBLTitleScreen::OnUserLoginDowngraded() {
}

void UTBLTitleScreen::OnTOSDeclined() {
}

void UTBLTitleScreen::OnTOSAgreed() {
}

void UTBLTitleScreen::OnPlayTutorialDeclined() {
}

void UTBLTitleScreen::OnPlayTutorialAccepted() {
}


void UTBLTitleScreen::Logout() {
}


UTBLTitleScreen::UTBLTitleScreen() {
    this->bSavedHasAgreedToTOS = true;
    this->State = ETitleScreenMode::Start;
}

