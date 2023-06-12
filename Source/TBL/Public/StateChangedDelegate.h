#pragma once
#include "CoreMinimal.h"
#include "StateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateChanged, const FName&, CurrentState);

