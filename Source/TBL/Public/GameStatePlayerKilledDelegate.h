#pragma once
#include "CoreMinimal.h"
#include "DeathEvent.h"
#include "GameStatePlayerKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStatePlayerKilled, FDeathEvent, DeathEvent);

