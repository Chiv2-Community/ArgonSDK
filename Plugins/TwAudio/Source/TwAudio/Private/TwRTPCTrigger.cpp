#include "TwRTPCTrigger.h"

ATwRTPCTrigger::ATwRTPCTrigger() {
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->InterpolationTimeMs = 100.00f;
    this->PlayerCollisionChannel = ECC_GameTraceChannel5;
    this->SphereRadius = 0.00f;
}

