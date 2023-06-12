#pragma once
#include "CoreMinimal.h"
#include "CharSprintStateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharSprintStateSignature, FName, SprintState);

