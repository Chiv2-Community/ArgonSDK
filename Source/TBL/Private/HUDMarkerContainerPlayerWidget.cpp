#include "HUDMarkerContainerPlayerWidget.h"

void UHUDMarkerContainerPlayerWidget::AttemptThrottledCombatStateChangeCall(EFrameThrottleBranch& Branches) {
}

UHUDMarkerContainerPlayerWidget::UHUDMarkerContainerPlayerWidget() {
    this->ContainerWidget = NULL;
    this->Pawn = NULL;
    this->bIsHovering = false;
}

