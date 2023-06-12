#include "UtilityAI_Context.h"

FUtilityAI_Context::FUtilityAI_Context() {
    this->Controller = NULL;
    this->TargetType = EUtilityAI_TargetType::None;
    this->TargetObject = NULL;
    this->Behavior = NULL;
}

