#pragma once
#include "CoreMinimal.h"
#include "WaveSpawningDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveSpawning, ASpawnWave*, Wave);

