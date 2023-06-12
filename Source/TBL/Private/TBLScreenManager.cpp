#include "TBLScreenManager.h"

void UTBLScreenManager::SwapNamedScreenToFront(FName ScreenName, UOverlay* Overlay) {
}

void UTBLScreenManager::SetWidgetAsRadioGroupSelection(FName Group, UTBLUserWidget* InSelection) {
}

void UTBLScreenManager::SetHudVisibility_Implementation(bool bVisible) {
}

void UTBLScreenManager::SetActiveCrosshair(UWidget* Crosshair) {
}

bool UTBLScreenManager::RemoveScreenFromStack(UTBLScreenWidget* Screen, UOverlay* Overlay, bool bPopOnly, bool bDontTellScreen) {
    return false;
}

void UTBLScreenManager::PushShowMouseCursorStack(UObject* Object) {
}

void UTBLScreenManager::PushScreenToStack(UTBLScreenWidget* Screen, UOverlay* Overlay) {
}

void UTBLScreenManager::PushNamedScreenToStack(UTBLScreenWidget* Screen, UOverlay* Overlay, FName ScreenName) {
}

void UTBLScreenManager::PopShowMouseCursorStack(UObject* Object) {
}

void UTBLScreenManager::PopScreenStack(UOverlay* Overlay) {
}


void UTBLScreenManager::GetTopScreen(UOverlay* Overlay, FName& OutScreenName, UTBLScreenWidget*& OutScreen) {
}

EGamepadNavigationMode UTBLScreenManager::GetGamepadNavigationMode() {
    return EGamepadNavigationMode::Mouse;
}

EGamepadInputMode UTBLScreenManager::GetGamepadInputMove() {
    return EGamepadInputMode::MouseKeyboard;
}

UWidget* UTBLScreenManager::GetActiveCrosshair() {
    return NULL;
}

void UTBLScreenManager::ClearScreenStack(UOverlay* Overlay) {
}



UTBLScreenManager::UTBLScreenManager() {
    this->ActiveCrosshair = NULL;
}

