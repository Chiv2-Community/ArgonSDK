#pragma once
#include "CoreMinimal.h"
#include "EVariancePattern.generated.h"

UENUM(BlueprintType)
enum class EVariancePattern : uint8 {
    None,
    SineWave,
    SquareWave,
    JDWave,
};

