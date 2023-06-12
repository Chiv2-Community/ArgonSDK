#include "ScoringBonusStatsComponent.h"

void UScoringBonusStatsComponent::OnOwnerDamageTaken(const FDamageTakenEvent& Event) {
}

UScoringBonusStatsComponent::UScoringBonusStatsComponent() {
    this->OwnerStatsComponent = NULL;
}

