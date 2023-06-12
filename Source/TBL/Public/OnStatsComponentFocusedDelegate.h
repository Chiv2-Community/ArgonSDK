#pragma once
#include "CoreMinimal.h"
#include "OnStatsComponentFocusedDelegate.generated.h"

class UStatsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatsComponentFocused, UStatsComponent*, StatsComponent);

