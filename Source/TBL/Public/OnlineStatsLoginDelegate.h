#pragma once
#include "CoreMinimal.h"
#include "OnlineStatsLoginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineStatsLogin, bool, bIsLoaded);

