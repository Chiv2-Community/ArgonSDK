#pragma once
#include "CoreMinimal.h"
#include "SprintStopSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSprintStopSignature, float, Distance, bool, bIsHoldingMoveKey);

