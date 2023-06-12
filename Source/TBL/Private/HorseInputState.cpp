#include "HorseInputState.h"

FHorseInputState::FHorseInputState() {
    this->bIsDown = false;
    this->AxisValue = 0.00f;
    this->bDidTap = false;
    this->bDidDoubleTap = false;
    this->bControlMode = false;
    this->PressedTime = 0.00f;
    this->ReleasedTime = 0.00f;
}

