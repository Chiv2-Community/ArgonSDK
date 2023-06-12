#include "TriggeredAction.h"

void UTriggeredAction::OnInvocationComplete(AAbilityInvocation* Invocation, UAbilitySpec* AbilitySpec) {
}

UTriggeredAction::UTriggeredAction() {
    this->bTriggerOnce = true;
    this->bTriggerMustOccur = false;
    this->bIgnoreTerminate = false;
}

