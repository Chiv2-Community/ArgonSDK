#pragma once
#include "CoreMinimal.h"
#include "MatchStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchStateChanged, FName, State);

