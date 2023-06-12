#pragma once
#include "CoreMinimal.h"
#include "OnlineStatsGlobalRankChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineStatsGlobalRankChanged, int32, NewGlobalRank);

