#pragma once
#include "CoreMinimal.h"
#include "OnRepAutomaticallyChooseSpawnWaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepAutomaticallyChooseSpawnWave, bool, NewAutomaticallyChooseSpawnWave);

