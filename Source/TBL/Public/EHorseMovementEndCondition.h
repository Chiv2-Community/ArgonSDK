#pragma once
#include "CoreMinimal.h"
#include "EHorseMovementEndCondition.generated.h"

UENUM(BlueprintType)
enum class EHorseMovementEndCondition : uint8 {
    None,
    Time,
    StrafeDistance,
    TurnAngle,
};

