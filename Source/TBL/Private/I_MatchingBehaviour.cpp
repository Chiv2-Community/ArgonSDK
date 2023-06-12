#include "I_MatchingBehaviour.h"

UI_MatchingBehaviour::UI_MatchingBehaviour() {
    this->EnemyOrFriendly = EUtilityAI_EnemyOrFriendly::All;
    this->BehaviourClass = NULL;
    this->bRangeAsPercent = false;
    this->bIgnoreSelf = true;
}

