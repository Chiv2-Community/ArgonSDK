#pragma once
#include "CoreMinimal.h"
#include "InvocationCompleteSignatureDelegate.generated.h"

class AAbilityInvocation;
class UAbilitySpec;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInvocationCompleteSignature, AAbilityInvocation*, Invocation, UAbilitySpec*, AbilitySpec);

