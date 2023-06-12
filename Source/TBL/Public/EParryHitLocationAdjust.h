#pragma once
#include "CoreMinimal.h"
#include "EParryHitLocationAdjust.generated.h"

UENUM(BlueprintType)
enum class EParryHitLocationAdjust : uint8 {
    Disable,
    ProjectToLine,
    ClosestPointOnBox,
};

