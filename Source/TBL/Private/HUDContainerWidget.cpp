#include "HUDContainerWidget.h"





void UHUDContainerWidget::PopulateWidgetPool() {
}

void UHUDContainerWidget::ManuallyUpdate() {
}


UHUDContainerWidget::UHUDContainerWidget() {
    this->WidgetContainerType = EWidgetContainer::LookAt;
    this->bRegisteredStaggeredUpdate = false;
}

