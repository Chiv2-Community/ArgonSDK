#include "SpinBoxInt.h"

void USpinBoxInt::SetValue(int32 NewValue) {
}

void USpinBoxInt::SetMinValue(int32 NewValue) {
}

void USpinBoxInt::SetMinSliderValue(int32 NewValue) {
}

void USpinBoxInt::SetMaxValue(int32 NewValue) {
}

void USpinBoxInt::SetMaxSliderValue(int32 NewValue) {
}

void USpinBoxInt::SetForegroundColor(FSlateColor InForegroundColor) {
}

int32 USpinBoxInt::GetValue() const {
    return 0;
}

int32 USpinBoxInt::GetMinValue() const {
    return 0;
}

int32 USpinBoxInt::GetMinSliderValue() const {
    return 0;
}

int32 USpinBoxInt::GetMaxValue() const {
    return 0;
}

int32 USpinBoxInt::GetMaxSliderValue() const {
    return 0;
}

void USpinBoxInt::ClearMinValue() {
}

void USpinBoxInt::ClearMinSliderValue() {
}

void USpinBoxInt::ClearMaxValue() {
}

void USpinBoxInt::ClearMaxSliderValue() {
}

USpinBoxInt::USpinBoxInt() {
    this->Value = 0;
    this->Style = NULL;
    this->Delta = 0;
    this->SliderExponent = 1;
    this->MinDesiredWidth = 0;
    this->ClearKeyboardFocusOnCommit = false;
    this->SelectAllTextOnCommit = true;
    this->bOverride_MinValue = false;
    this->bOverride_MaxValue = false;
    this->bOverride_MinSliderValue = false;
    this->bOverride_MaxSliderValue = false;
    this->MinValue = 0;
    this->MaxValue = 0;
    this->MinSliderValue = 0;
    this->MaxSliderValue = 0;
}

