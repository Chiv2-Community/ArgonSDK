#pragma once
#include "CoreMinimal.h"
#include "EGenerationMode.generated.h"

UENUM(BlueprintType)
enum class EGenerationMode : uint8 {
    Uniform,
    UniformRandom,
    Random,
};

