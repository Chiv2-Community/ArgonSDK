#pragma once
#include "CoreMinimal.h"
#include "EPointsOnGridTrace.generated.h"

UENUM(BlueprintType)
enum class EPointsOnGridTrace : uint8 {
    NoTrace,
    AllowMissedTraces,
    DiscardMissedTraces,
};

