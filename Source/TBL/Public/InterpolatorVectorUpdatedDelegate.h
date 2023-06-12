#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterpolatorVectorUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInterpolatorVectorUpdated, FVector, Value);

