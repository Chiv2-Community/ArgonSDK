#pragma once
#include "CoreMinimal.h"
#include "OnFuseStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFuseStarted, float, EndTime);

