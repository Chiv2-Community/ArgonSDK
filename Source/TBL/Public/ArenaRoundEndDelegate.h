#pragma once
#include "CoreMinimal.h"
#include "ArenaRoundEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArenaRoundEnd, int32, RoundNum);

