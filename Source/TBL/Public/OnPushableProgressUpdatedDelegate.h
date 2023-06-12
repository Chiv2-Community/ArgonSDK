#pragma once
#include "CoreMinimal.h"
#include "OnPushableProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushableProgressUpdated, float, Progress);

