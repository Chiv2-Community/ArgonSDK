#pragma once
#include "CoreMinimal.h"
#include "JoinWaveResponseDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoinWaveResponse, ASpawnWave*, SpawnWave, bool, bJoinWaveSuccess);

