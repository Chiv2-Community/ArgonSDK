#include "TBLUserWidget.h"

void UTBLUserWidget::SetSelfAsRadioGroupSelection(FName Group) {
}

void UTBLUserWidget::PlayInterruptableAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, FName InterruptGroup, bool bPlayInReverse, bool bReverseExisting) {
}

void UTBLUserWidget::PlayAdvancedAnimation(const UWidgetAnimation* InAnimation, const UCurveFloat* InterpolationCurve, float StartAtTime, float LoopBackToTime, float EndAtTime, bool bIsNormalizedCurve, float AnimationSpeed, int32 NumLoopsToPlay, bool bResumeFromLastTime, float Duration, float MaxDuration) {
}

void UTBLUserWidget::NativeUnhighlight() {
}

void UTBLUserWidget::NativeHighlight() {
}




void UTBLUserWidget::IsWidgetEnabled(EWidgetDisableType& Result) {
}

bool UTBLUserWidget::IsWidgetDisabled() const {
    return false;
}

void UTBLUserWidget::HandleGamepadNavigationModeChanged(EGamepadNavigationMode Mode) {
}

UTBLScreenManager* UTBLUserWidget::GetScreenManager() const {
    return NULL;
}

UTBLUserWidget* UTBLUserWidget::GetRadioGroupSelection(FName Group) {
    return NULL;
}

UTBLUserWidget::UTBLUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsInFocusPath = false;
    this->bIsHighlighted = false;
    this->IsWidgetDisabledInDemoMode = false;
    this->IsWidgetDisabledInShippingWIP = false;
}

