#pragma once
#include "CoreMinimal.h"
#include "OnUnderCrosshairChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnderCrosshairChanged, bool, bUnderCrosshair);

