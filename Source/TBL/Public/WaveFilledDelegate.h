#pragma once
#include "CoreMinimal.h"
#include "WaveFilledDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveFilled, ASpawnWave*, Wave);

