#include "ActionContext.h"

FActionContext::FActionContext() {
    this->AbilitySpec = NULL;
    this->bHeadShotDamageOnly = false;
    this->bParried = false;
    this->bMultiAttackHitParry = false;
    this->bArrowParried = false;
    this->bDisarmed = false;
    this->bIsInTeamThwackRange = false;
    this->bOverrideImpactPoint = false;
    this->bCosmetic = false;
    this->bIgnoreAutonomousActions = false;
}

