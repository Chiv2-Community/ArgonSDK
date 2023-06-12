#pragma once
#include "CoreMinimal.h"
#include "OnReceivedPendingSpawnDelegate.generated.h"

class ASpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedPendingSpawn, ASpawner*, PendingSpawner, float, ServerSpawnTimeSeconds);

