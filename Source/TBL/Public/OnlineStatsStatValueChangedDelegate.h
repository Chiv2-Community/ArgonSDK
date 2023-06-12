#pragma once
#include "CoreMinimal.h"
#include "EOnlineStat.h"
#include "OnlineStatsStatValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnlineStatsStatValueChanged, EOnlineStat, Stat, int32, OldValue, int32, NewValue);

