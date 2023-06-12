#include "TwSplineEmitterBase.h"

ATwSplineEmitterBase::ATwSplineEmitterBase() {
    this->NumberOfVoices = 1;
    this->UpdateRateSeconds = 0.40f;
    this->EventOnStartup = NULL;
}

