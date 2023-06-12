#include "OptionsScreenProp_Slider.h"

void UOptionsScreenProp_Slider::SetCurrentValue(float In) {
}

FText UOptionsScreenProp_Slider::GetValueText(float Value) const {
    return FText::GetEmpty();
}

float UOptionsScreenProp_Slider::GetCurrentValue() {
    return 0.0f;
}

UOptionsScreenProp_Slider::UOptionsScreenProp_Slider() {
    this->CurrentValue = 0.00f;
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->StepSize = 0.00f;
    this->MinFractionalDigits = 0;
    this->MaxFractionalDigits = 0;
    this->CurrentValueFudgeFactor = 0.00f;
    this->DelaySliderSetter = false;
    this->MinDisplayTextRange = -1.00f;
    this->MaxDisplayTextRange = -1.00f;
}

