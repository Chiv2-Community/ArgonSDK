#pragma once
#include "CoreMinimal.h"
#include "EDLSSOperatingMode.generated.h"

UENUM(BlueprintType)
enum class EDLSSOperatingMode : uint8 {
    Off,
    Performance,
    Balanced,
    Quality,
};

