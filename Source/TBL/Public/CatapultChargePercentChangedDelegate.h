#pragma once
#include "CoreMinimal.h"
#include "CatapultChargePercentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCatapultChargePercentChanged, float, ChargePercent);

