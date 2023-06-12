#include "BoxTracers.h"

UBoxTracers::UBoxTracers() {
    this->IgnoreParryDepth = 100;
    this->bUseCustomSocket = false;
    this->CurrentIndex = 0;
    this->BoxComponent = NULL;
    this->bIsValid = false;
    this->bCanClash = false;
    this->DelayHitTime = 0.00f;
    this->bDelayedHit = false;
    this->bIsHorizontalBackSwingDone = false;
    this->bIsVerticalBackSwingDone = false;
    this->bIsStabWindupDone = false;
    this->bIsOverheadWindupDone = false;
}

