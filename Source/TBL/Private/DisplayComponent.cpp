#include "DisplayComponent.h"

EFaction UDisplayComponent::GetFactionFromRelevantFactionStatic(UObject* WorldContextObject, EFactionOrAttackerDefender RelevantFaction) {
    return EFaction::Agatha;
}

EFaction UDisplayComponent::GetFactionFromRelevantFaction(EFactionOrAttackerDefender RelevantFaction) {
    return EFaction::Agatha;
}

UDisplayComponent::UDisplayComponent() {
    this->WidgetContainerType = EWidgetContainer::AlwaysVisible;
    this->bCanHudMarkerUsePooledWidget = true;
}

