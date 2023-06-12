#pragma once
#include "CoreMinimal.h"
#include "IsMatchmakingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIsMatchmakingChanged, bool, bIsMatchmaking);

