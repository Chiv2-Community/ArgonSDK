#pragma once
#include "CoreMinimal.h"
#include "OnDashDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDash, FName, DashDirection);

