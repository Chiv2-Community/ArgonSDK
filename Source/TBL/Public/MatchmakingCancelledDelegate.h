#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCancelledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchmakingCancelled, bool, bSuccess);

