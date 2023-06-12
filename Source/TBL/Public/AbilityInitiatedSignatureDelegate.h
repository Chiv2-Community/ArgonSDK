#pragma once
#include "CoreMinimal.h"
#include "AbilityInitiatedSignatureDelegate.generated.h"

class AAbilityInvocation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityInitiatedSignature, AAbilityInvocation*, Invocation);

