#pragma once
#include "CoreMinimal.h"
#include "EFailedInventoryAction.h"
#include "OnInventoryActionFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryActionFailed, EFailedInventoryAction, Action);

