#include "DrainStamina.h"

void UDrainStamina::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void UDrainStamina::OnDestroyed(AActor* DestroyedActor) {
}

void UDrainStamina::OnCombatStateEvent(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

UDrainStamina::UDrainStamina() {
    this->DrainRate = 0.00f;
    this->DrainRateModifier = NULL;
    this->Time = 0.00f;
    this->LastTickTime = 0.00f;
    this->DisabledId = -1;
    this->bEnabled = false;
}

