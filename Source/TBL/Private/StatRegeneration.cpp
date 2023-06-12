#include "StatRegeneration.h"

FStatRegeneration::FStatRegeneration() {
    this->Stat = EStat::None;
    this->Speed = 0.00f;
    this->PercentToRegen = 0.00f;
    this->RegenerationCurve = NULL;
    this->TeamDamageToRegen = 0.00f;
    this->TeamDamageLastTimeStamp = 0.00f;
}

