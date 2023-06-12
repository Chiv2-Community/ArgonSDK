#pragma once
#include "CoreMinimal.h"
#include "OnStaminaCostFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStaminaCostFailed, FName, Event);

