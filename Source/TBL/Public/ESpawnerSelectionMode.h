#pragma once
#include "CoreMinimal.h"
#include "ESpawnerSelectionMode.generated.h"

UENUM(BlueprintType)
enum class ESpawnerSelectionMode : uint8 {
    UniformDistribute,
    RandomDistribute,
    SequentialFill,
    RandomFill,
};

