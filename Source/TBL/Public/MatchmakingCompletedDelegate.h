#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchmakingCompleted, bool, bSuccess);

