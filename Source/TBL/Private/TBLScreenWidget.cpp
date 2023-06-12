#include "TBLScreenWidget.h"


bool UTBLScreenWidget::ShouldShowMouseCursorOnInputCapture_Implementation() const {
    return false;
}

bool UTBLScreenWidget::ShouldOverrideIsFocusable_Implementation() const {
    return false;
}

void UTBLScreenWidget::RequestPlayerInput(bool WantsInput) {
}

void UTBLScreenWidget::PushScreenToParentStack(UTBLScreenWidget* NextScreen) {
}

void UTBLScreenWidget::PopOffParentStack() {
}

void UTBLScreenWidget::PlayOutroAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, bool bReverseExisting) {
}

void UTBLScreenWidget::PlayIntroAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, bool bReverseExisting) {
}


void UTBLScreenWidget::OnPausedScreen_Implementation() {
}


void UTBLScreenWidget::OnOpenedScreen_Implementation() {
}

void UTBLScreenWidget::OnClosedScreen_Implementation() {
}

void UTBLScreenWidget::FireUpdateNotifications() {
}


void UTBLScreenWidget::FireButtonAction(FName ButtonID) {
}


bool UTBLScreenWidget::BlockKeyPress(const EWeaponAbilitySlotKey WeaponAbilitySlotKey) const {
    return false;
}

void UTBLScreenWidget::AddButtonAction(FName ButtonID, int32 ButtonIndex) {
}

UTBLScreenWidget::UTBLScreenWidget() {
    this->ParentScreenManager = NULL;
    this->bTopmostScreen = false;
    this->bIsScreenClosed = false;
    this->bWantsInputFocusOnTopmost = false;
    this->bInputUIAndGame = false;
    this->PlayerInputIdAtInputModeChange = 0;
    this->MouseLockMode = EMouseLockMode::LockOnCapture;
    this->bHideCursorDuringCapture = false;
    this->bModifyVisibilityOnPushAndPop = true;
    this->TopmostVisibilty = ESlateVisibility::SelfHitTestInvisible;
    this->NonTopmostVisibility = ESlateVisibility::HitTestInvisible;
    this->bPopWhenEscapePressed = true;
}

