#include "TG_PerceivedCharacters.h"

UTG_PerceivedCharacters::UTG_PerceivedCharacters() {
    this->RelevantFaction = EUtilityAI_EnemyOrFriendly::All;
    this->bDisregardDownedPlayers = false;
    this->bCheckAllowedDamagingFaction = false;
}

