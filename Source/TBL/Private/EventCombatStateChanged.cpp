#include "EventCombatStateChanged.h"

void UEventCombatStateChanged::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

UEventCombatStateChanged::UEventCombatStateChanged() {
    this->bTriggerOnEnd = false;
    this->AttackID = 0;
}

