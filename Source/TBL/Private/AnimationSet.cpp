#include "AnimationSet.h"

UAnimationSet::UAnimationSet() {
    this->bIsCustomization = false;
    this->bFirstPerson = false;
    this->DefaultTracerCacheKeys.AddDefaulted(72);
    this->AnimationFPS = 120;
}

