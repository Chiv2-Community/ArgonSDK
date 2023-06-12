#include "ScaleDirectionParams.h"

FScaleDirectionParams::FScaleDirectionParams() {
    this->ID = 0;
    this->ScaleDirection = EScaleDirection::CharacterRotation;
    this->ForwardScale = 0.00f;
    this->BackwardScale = 0.00f;
    this->LeftScale = 0.00f;
    this->RightScale = 0.00f;
    this->Curve = NULL;
}

