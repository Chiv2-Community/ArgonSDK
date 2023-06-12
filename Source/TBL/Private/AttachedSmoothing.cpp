#include "AttachedSmoothing.h"

FAttachedSmoothing::FAttachedSmoothing() {
    this->bNeedsSmoothing = false;
    this->RotationTargetYaw = 0.00f;
    this->RotationInterpSpeed = 0.00f;
}

