#pragma once
#include "CoreMinimal.h"
#include "OnPushableActivatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushableActivated, bool, IsActive);

