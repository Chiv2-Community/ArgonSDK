#pragma once
#include "CoreMinimal.h"
#include "ArenaRoundStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArenaRoundStart, int32, RoundNum);

