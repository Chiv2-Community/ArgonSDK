#include "PlayerCapturePointComponentProperties.h"

FPlayerCapturePointComponentProperties::FPlayerCapturePointComponentProperties() {
    this->TimeToCapture = 0.00f;
    this->AllowedFaction = EFaction::Agatha;
    this->CanBeBlockedByOtherFaction = false;
}

