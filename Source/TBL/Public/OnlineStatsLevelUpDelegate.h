#pragma once
#include "CoreMinimal.h"
#include "LevelUpResult.h"
#include "OnlineStatsLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineStatsLevelUp, const TArray<FLevelUpResult>&, LevelUpEvents);

