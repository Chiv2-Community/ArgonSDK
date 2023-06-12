#pragma once
#include "CoreMinimal.h"
#include "ESpawnWaveState.generated.h"

UENUM(BlueprintType)
enum class ESpawnWaveState : uint8 {
    EWaveState_NotStarted,
    EWaveState_Spawning,
    EWaveState_Ending,
    EWaveState_MAX UMETA(Hidden),
};

