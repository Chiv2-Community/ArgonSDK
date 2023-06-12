#pragma once
#include "CoreMinimal.h"
#include "LanceChargeEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLanceChargeEnabled, bool, bEnabled);

