#include "UtilityAI_InputAxis.h"

float UUtilityAI_InputAxis::ScaleToRange(float X) const {
    return 0.0f;
}

float UUtilityAI_InputAxis::CalculateValue_Implementation(const FUtilityAI_Context& C) const {
    return 0.0f;
}

UUtilityAI_InputAxis::UUtilityAI_InputAxis() {
    this->RangeMin = 0.00f;
    this->RangeMax = 1.00f;
}

