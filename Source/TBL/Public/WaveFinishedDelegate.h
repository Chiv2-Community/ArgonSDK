#pragma once
#include "CoreMinimal.h"
#include "WaveFinishedDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveFinished, ASpawnWave*, Wave);

