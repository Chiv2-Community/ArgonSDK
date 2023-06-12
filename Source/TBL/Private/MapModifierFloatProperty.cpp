#include "MapModifierFloatProperty.h"

void UMapModifierFloatProperty::SetValue(float NewValue) {
}

UMapModifierFloatProperty::UMapModifierFloatProperty() {
    this->DefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->Value = 0.00f;
}

