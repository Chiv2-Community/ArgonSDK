#include "NativeCombatState_Release.h"

void UNativeCombatState_Release::ShouldDelayCounter(bool& Delay, float& DelayTime) {
}

void UNativeCombatState_Release::OnAllowCounters(float OverTime) {
}

void UNativeCombatState_Release::HandleQueuedParryCounter() {
}

bool UNativeCombatState_Release::AllowSprinting() const {
    return false;
}

UNativeCombatState_Release::UNativeCombatState_Release() {
    this->DelayCounterTimeOnHit = 0.35f;
    this->DelayCounterTimeOnBlocked = 0.35f;
    this->DashJumpAttackType = NULL;
    this->ClearAttackQueueTime = 0.10f;
    this->PreviousStateTime = 0.00f;
    this->HasHitTime = 0.00f;
    this->PreviousHasHitTime = 0.00f;
    this->HasHit = false;
    this->HitWasBlocked = false;
    this->PreviousHasHit = false;
    this->PreviousHitWasBlocked = false;
    this->AllowCounters = false;
}

