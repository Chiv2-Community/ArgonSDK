#include "UtilityAI_DecisionMaker.h"

UUtilityAI_DecisionMaker::UUtilityAI_DecisionMaker() {
    this->UpdateCategory = EStaggeredUpdateCategory::UtilityAI;
    this->BlackboardAsset = NULL;
    this->bIsCombatDecisionMaker = false;
    this->bHasInitialized = false;
}

