#include "TG_CharactersWithinRangeOfMe.h"

UTG_CharactersWithinRangeOfMe::UTG_CharactersWithinRangeOfMe() {
    this->RelevantFaction = EUtilityAI_EnemyOrFriendly::All;
    this->Radius = 2000.00f;
    this->bDisregardDownedPlayers = false;
}

