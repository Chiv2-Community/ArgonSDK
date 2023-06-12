#pragma once
#include "CoreMinimal.h"
#include "OnDownedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownedStateChanged, FName, PreviousState, FName, NewState);

