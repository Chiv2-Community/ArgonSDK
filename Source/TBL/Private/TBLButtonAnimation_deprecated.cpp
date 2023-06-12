#include "TBLButtonAnimation_deprecated.h"

FTBLButtonAnimation_deprecated::FTBLButtonAnimation_deprecated() {
    this->AnimationType = EButtonAnimationStyle_deprecated::Normal;
    this->Looping = false;
    this->StartingInterpValue = 0.00f;
    this->EndingInterpValue = 0.00f;
    this->StartDelay = 0.00f;
    this->InterpTime = 0.00f;
    this->InterpolationCurve = NULL;
}

