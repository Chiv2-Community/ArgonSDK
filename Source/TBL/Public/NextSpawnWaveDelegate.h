#pragma once
#include "CoreMinimal.h"
#include "NextSpawnWaveDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNextSpawnWave, ASpawnWave*, SpawnWave);

