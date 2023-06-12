#pragma once
#include "CoreMinimal.h"
#include "EHorseMovementStateOp.generated.h"

UENUM(BlueprintType)
enum class EHorseMovementStateOp : uint8 {
    GreaterThan,
    EqualTo,
    LessThanOrEqualTo,
};

