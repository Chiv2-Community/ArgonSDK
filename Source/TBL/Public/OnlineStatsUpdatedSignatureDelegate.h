#pragma once
#include "CoreMinimal.h"
#include "TBLOnlineStats.h"
#include "OnlineStatsUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineStatsUpdatedSignature, FTBLOnlineStats, OnlineStats);

