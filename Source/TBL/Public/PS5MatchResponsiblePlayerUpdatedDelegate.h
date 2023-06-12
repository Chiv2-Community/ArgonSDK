#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PS5MatchResponsiblePlayerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPS5MatchResponsiblePlayerUpdated, FUniqueNetIdRepl, PlayerController);

