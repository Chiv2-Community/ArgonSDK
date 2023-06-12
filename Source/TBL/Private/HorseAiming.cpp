#include "HorseAiming.h"

FHorseAiming::FHorseAiming() {
    this->bEnabled = false;
    this->bBlendOut = false;
    this->TargetHorizontalMin = 0.00f;
    this->TargetHorizontalMax = 0.00f;
    this->HorizontalMin = 0.00f;
    this->HorizontalMax = 0.00f;
    this->VerticalMin = 0.00f;
    this->VerticalMax = 0.00f;
    this->Direction = 0.00f;
    this->CurrentOffset = 0.00f;
    this->OffsetForwardSlow = 0.00f;
    this->OffsetForwardMedium = 0.00f;
    this->OffsetForwardFast = 0.00f;
    this->OffsetBackwards = 0.00f;
    this->OffsetStrafe = 0.00f;
    this->InterpSpeed = 0.00f;
    this->RecoveryInterpSpeed = 0.00f;
    this->StartTime = 0.00f;
}

