#include "ApplyTargetMethod.h"

void UApplyTargetMethod::OnFinished(AAbilityInvocation* InInvocation, UAbilityTargetMethod* InTargetMethod) {
}

UApplyTargetMethod::UApplyTargetMethod() {
    this->TargetActor = ETargetMethodParameters::Initiator;
    this->TargetMethod = NULL;
    this->TargetMethodInstance = NULL;
}

