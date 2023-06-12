#include "EffectDuration.h"

FEffectDuration::FEffectDuration() {
    this->Type = EDuration::None;
    this->Time = 0.00f;
    this->Ticks = 0;
    this->StateBasedEffectEnd = EStateBasedEffectEnd::EndOfAttack;
}

