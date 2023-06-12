#include "WidgetVisibilityComponent.h"

void UWidgetVisibilityComponent::SetVisibile(bool bInVisibility) {
}

void UWidgetVisibilityComponent::NotifyWidgetCompletedFadeOut(bool bInCompletedFadeOut) {
}

bool UWidgetVisibilityComponent::IsVisible() const {
    return false;
}

bool UWidgetVisibilityComponent::HasWidgetCompletedFadeOut() const {
    return false;
}

void UWidgetVisibilityComponent::ErrorNotifyTimer() {
}

UWidgetVisibilityComponent::UWidgetVisibilityComponent() {
    this->bVisible = true;
    this->bCompletedFadeOut = false;
}

