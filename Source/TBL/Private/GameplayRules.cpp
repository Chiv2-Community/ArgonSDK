#include "GameplayRules.h"

float UGameplayRules::UpdateAimPenalty(float DeltaSeconds, const TArray<FAimPenalty>& AimPenalties) {
    return 0.0f;
}
















float UGameplayRules::GetRangedInaccuracy(AInventoryItem* Projectile) {
    return 0.0f;
}








UGameplayRules::UGameplayRules() {
    this->AimPenalty = 0.00f;
}

