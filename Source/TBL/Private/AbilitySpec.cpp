#include "AbilitySpec.h"

void UAbilitySpec::GetAllChildActions(TArray<UAction*>& outActions) const {
}

UAbilitySpec::UAbilitySpec() {
    this->BlueprintCleanupDelayTime = 5.00f;
    this->ActivationMethod = NULL;
    this->TargetMethod = NULL;
    this->ProjectileSpawnType = EProjectileSpawnType::None;
    this->bAimAtCrosshair = false;
    this->bInterruptOnDeath = true;
}

