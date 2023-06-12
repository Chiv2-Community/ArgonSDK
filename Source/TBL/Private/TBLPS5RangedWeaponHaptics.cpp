#include "TBLPS5RangedWeaponHaptics.h"

void UTBLPS5RangedWeaponHaptics::UpdateVibrationBasedOnStamina(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue) {
}

UTBLPS5RangedWeaponHaptics::UTBLPS5RangedWeaponHaptics() {
    this->VibrationStrengthFromStamina = NULL;
    this->MaxTriggerAmplitudeStrength = 0;
    this->BowReleasedEffect = NULL;
    this->BowFireTriggerFrequency = 0;
    this->BowFireTriggerAmplitude = 0;
    this->CrossbowFireEffect = NULL;
    this->CrossbowReloadEffect = NULL;
    this->CrossbowReloadDelay = 0.00f;
}

