#pragma once
#include "CoreMinimal.h"
#include "InterpolatorFloatUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInterpolatorFloatUpdated, float, Value);

