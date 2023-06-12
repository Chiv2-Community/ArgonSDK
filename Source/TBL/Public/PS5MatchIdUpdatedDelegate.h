#pragma once
#include "CoreMinimal.h"
#include "PS5MatchIdUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPS5MatchIdUpdated, const FString&, MatchID);

