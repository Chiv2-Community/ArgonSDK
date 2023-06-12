#include "TBLPS5BlockingHaptics.h"

void UTBLPS5BlockingHaptics::UpdateResistanceBasedOnStamina(AActor* Actor, EStat StatType, const FStatEntry& Stat, float DeltaValue) {
}

UTBLPS5BlockingHaptics::UTBLPS5BlockingHaptics() {
    this->BlockingStrength = NULL;
    this->MaxTriggerResistanceStrength = 0;
    this->ShieldLightHit = NULL;
    this->ShieldHeavyHit = NULL;
    this->SharpWeaponLightHit = NULL;
    this->SharpWeaponHeavyHit = NULL;
    this->BluntWeaponLightHit = NULL;
    this->BluntWeaponHeavyHit = NULL;
}

