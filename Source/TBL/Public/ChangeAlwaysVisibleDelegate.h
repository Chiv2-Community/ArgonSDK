#pragma once
#include "CoreMinimal.h"
#include "ChangeAlwaysVisibleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeAlwaysVisible, bool, bInAlwaysVisible);

