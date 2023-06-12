#pragma once
#include "CoreMinimal.h"
#include "BlockedStatusUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlockedStatusUpdated, bool, IsBlocked);

