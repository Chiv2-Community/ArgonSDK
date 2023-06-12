#include "TwAkReverbVolume.h"
#include "TwAkSplineProximityEffectsComponent.h"

ATwAkReverbVolume::ATwAkReverbVolume() {
    this->LateReverbComponent = CreateDefaultSubobject<UTwAkSplineProximityEffectsComponent>(TEXT("LateReverb"));
}

