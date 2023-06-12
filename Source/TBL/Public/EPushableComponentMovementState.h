#pragma once
#include "CoreMinimal.h"
#include "EPushableComponentMovementState.generated.h"

UENUM(BlueprintType)
enum class EPushableComponentMovementState : uint8 {
    STATIONARY,
    ACCELERATING,
    DECELERATING,
    MAXSPEED,
    DEACTIVATED,
};

