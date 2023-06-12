#pragma once
#include "CoreMinimal.h"
#include "OnHorizontalLockLimitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHorizontalLockLimit, float, DeltaTime, float, DeltaYaw);

