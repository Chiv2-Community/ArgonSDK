#include "UtilityAI_Behavior.h"

UUtilityAI_Behavior::UUtilityAI_Behavior() {
    this->Weight = 1;
    this->TargetSwitchInertiaPenalty = 1.00f;
    this->BehaviorScoreInteria = 1.25f;
    this->BehaviorActiveActionMultiplier = 1.25f;
    this->LastOrCurrentDuration = 0.00f;
    this->LastTimeTicked = 0.00f;
    this->Action = NULL;
    this->TargetGenerator = NULL;
}

