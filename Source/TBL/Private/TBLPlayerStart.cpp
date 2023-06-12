#include "TBLPlayerStart.h"

bool ATBLPlayerStart::IsValidSpawnFor(AController* Controller) {
    return false;
}

ATBLPlayerStart::ATBLPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->PrioirtyLevel = 0;
}

