#pragma once
#include "CoreMinimal.h"
#include "TargetMethodFinishedSignatureDelegate.generated.h"

class AAbilityInvocation;
class UAbilityTargetMethod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetMethodFinishedSignature, AAbilityInvocation*, Invocation, UAbilityTargetMethod*, TargetMethod);

