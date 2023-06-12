#pragma once
#include "CoreMinimal.h"
#include "SpawnQueuePlayerReadyToSpawnDelegate.generated.h"

class AController;
class ASpawner;
class USpawnQueuer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpawnQueuePlayerReadyToSpawn, USpawnQueuer*, SpawnQueuer, AController*, Player, ASpawner*, Spawner);

