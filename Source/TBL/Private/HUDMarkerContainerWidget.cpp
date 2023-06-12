#include "HUDMarkerContainerWidget.h"

UHUDMarkerContainerWidget::UHUDMarkerContainerWidget() {
    this->bClampMarkersToCircle = false;
    this->PinInterpSpeed = 0.00f;
    this->UnpinInterpSpeed = 0.00f;
    this->LimitFadeSpeed = 0.00f;
    this->LastFocusedInteractable = NULL;
}

