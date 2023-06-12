#include "FxActor.h"


void AFxActor::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void AFxActor::DisableAndDestroy(float LifeSpan) {
}

void AFxActor::CleanupAbilityActorsInternal(AController* Controller) {
}


AFxActor::AFxActor() {
    this->bEnableCollisionOnTearOff = false;
    this->TornOffLifeSpan = 5.00f;
}

