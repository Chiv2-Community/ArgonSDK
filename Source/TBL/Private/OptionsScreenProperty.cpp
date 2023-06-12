#include "OptionsScreenProperty.h"

void UOptionsScreenProperty::ResetToDefault() {
}

void UOptionsScreenProperty::Reset() {
}

bool UOptionsScreenProperty::IsDefaultValue() {
    return false;
}

void UOptionsScreenProperty::Apply() {
}

UOptionsScreenProperty::UOptionsScreenProperty() {
    this->ApplyImmediately = true;
    this->ApplyOnlyImmediately = false;
}

