#pragma once
#include "CoreMinimal.h"
#include "EXESSOperatingMode.generated.h"

UENUM(BlueprintType)
enum class EXESSOperatingMode : uint8 {
    Off,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
};

