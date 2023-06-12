#include "CombatStateSynchronization.h"

void UCombatStateSynchronization::ClientOnAttackFailed_Implementation(int32 AttackID) {
}

UCombatStateSynchronization::UCombatStateSynchronization() {
    this->CombatStateComponent = NULL;
    this->CombatStateQueue = NULL;
    this->LatestAttackID = 0;
}

