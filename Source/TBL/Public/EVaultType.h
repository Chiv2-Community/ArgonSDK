#pragma once
#include "CoreMinimal.h"
#include "EVaultType.generated.h"

UENUM(BlueprintType)
enum class EVaultType : uint8 {
    ObstacleVault,
    WindowVault,
    LedgeVault,
};

