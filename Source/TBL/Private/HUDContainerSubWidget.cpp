#include "HUDContainerSubWidget.h"





AActor* UHUDContainerSubWidget::GetAssignedActor() const {
    return NULL;
}

UHUDContainerSubWidget::UHUDContainerSubWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AssignedActor = NULL;
    this->AssignedComponent = NULL;
    this->bIsFocused = false;
    this->FocusAlpha = 0.00f;
    this->FocusScale = 0.00f;
}

