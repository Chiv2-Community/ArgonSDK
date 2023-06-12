#pragma once
#include "CoreMinimal.h"
#include "BreakableThresholdReachedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBreakableThresholdReached, float, NewHealthPercentThreshold, UObject*, GenericObject);

