#pragma once
#include "CoreMinimal.h"
#include "EComboTimingPolicy.generated.h"

UENUM(BlueprintType)
enum class EComboTimingPolicy : uint8 {
    StandardTimings,
    ComboTimings,
    GlobalParryComboTiming,
};

