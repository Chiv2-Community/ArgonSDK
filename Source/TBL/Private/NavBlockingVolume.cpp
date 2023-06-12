#include "NavBlockingVolume.h"
#include "TBLNavModifierComponent.h"

ANavBlockingVolume::ANavBlockingVolume() {
    this->NavModifier = CreateDefaultSubobject<UTBLNavModifierComponent>(TEXT("NavModifier"));
}

