#include "BlendParams.h"

FBlendParams::FBlendParams() {
    this->EasingFunc = EEasingFunc::Linear;
    this->BlendTime = 0.00f;
    this->BlendExp = 0.00f;
    this->Delay = 0.00f;
    this->bIsActive = false;
    this->StartTime = 0.00f;
    this->Time = 0.00f;
}

