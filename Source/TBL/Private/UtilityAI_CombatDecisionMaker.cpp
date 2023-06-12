#include "UtilityAI_CombatDecisionMaker.h"

FIncomingAttackInfo UUtilityAI_CombatDecisionMaker::GetIncomingAttackInfo() const {
    return FIncomingAttackInfo{};
}

UUtilityAI_CombatDecisionMaker::UUtilityAI_CombatDecisionMaker() {
    this->bShouldRecieveAllCombatStateChanges = false;
    this->OverrideDecisionActor = NULL;
}

