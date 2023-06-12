#pragma once
#include "CoreMinimal.h"
#include "EClassSpatialNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EClassSpatialNodeMapping : uint8 {
    LowFreq,
    HighFreq,
    LowFreqWithFastPath,
    HighFreqWithFastPath,
    MediumFreq,
    MediumFreqNoDynamic,
};

