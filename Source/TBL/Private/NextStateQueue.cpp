#include "NextStateQueue.h"

FNextStateQueue::FNextStateQueue() {
    this->OverrideStateTime = 0.00f;
    this->bStartAttack = false;
    this->Variant = ECrowdControlVariant::CrowdControlVariant1;
}

