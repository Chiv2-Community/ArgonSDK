#include "CombatStateActivationMethod.h"

void UCombatStateActivationMethod::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState) {
}

UCombatStateActivationMethod::UCombatStateActivationMethod() {
    this->CostExceededGotoState = TEXT("Recovery");
    this->InventoryItem = NULL;
    this->EmoteId = 0;
    this->bCombatStateAttackStarted = false;
    this->bAnimationDataTableNotFound = false;
}

