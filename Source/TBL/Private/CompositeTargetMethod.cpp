#include "CompositeTargetMethod.h"

void UCompositeTargetMethod::TargetUsingMethod(UAbilityTargetMethod* TargetMethod, const FAbilityInitiationParams& InInitiationParams, bool bLocal, int32 InMultiTargetMethodIndex) {
}

UCompositeTargetMethod::UCompositeTargetMethod() {
    this->bIgnoreChildrenInitiateRequirements = false;
    this->bPendingFinish = false;
}

