#include "TBLPS5GeneralHaptics.h"

void UTBLPS5GeneralHaptics::PlayLowHealthEffect(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue) {
}

UTBLPS5GeneralHaptics::UTBLPS5GeneralHaptics() {
    this->StartingSprintEffect = NULL;
    this->MaximumSprintEffect = NULL;
    this->LowHealthEffect = NULL;
    this->HealthPercentToPlay = 0.30f;
}

