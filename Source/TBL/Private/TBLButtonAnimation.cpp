#include "TBLButtonAnimation.h"

FTBLButtonAnimation::FTBLButtonAnimation() {
    this->AnimationType = EButtonAnimationStyle::Normal;
    this->Looping = false;
    this->StartingInterpValue = 0.00f;
    this->EndingInterpValue = 0.00f;
    this->StartDelay = 0.00f;
    this->InterpTime = 0.00f;
    this->InterpolationCurve = NULL;
}

