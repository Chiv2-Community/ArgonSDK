#pragma once
#include "CoreMinimal.h"
#include "OnTurnLockLimitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTurnLockLimit, float, DeltaTime, float, DeltaPitch);

