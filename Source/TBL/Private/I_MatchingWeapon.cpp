#include "I_MatchingWeapon.h"

UI_MatchingWeapon::UI_MatchingWeapon() {
    this->EnemyOrFriendly = EUtilityAI_EnemyOrFriendly::All;
    this->WeaponClass = NULL;
    this->bRangeAsPercent = false;
    this->bIgnoreSelf = true;
}

