#include "I_Influence.h"

UI_Influence::UI_Influence() {
    this->bDrawDebugSparseGrid = false;
    this->bDrawDebugInfluenceQueries = false;
    this->bIgnoreTargetActor = true;
    this->FactionRestriction = EUtilityAI_EnemyOrFriendly::All;
    this->PositiveInfluenceFaction = EUtilityAI_EnemyOrFriendly::All;
    this->FindMethod = EInfluenceMapFindMethod::Spatial;
    this->MaxInfluenceDistance = 10000.00f;
    this->bSearchAITargetLocations = false;
}

