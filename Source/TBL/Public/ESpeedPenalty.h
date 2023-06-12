#pragma once
#include "CoreMinimal.h"
#include "ESpeedPenalty.generated.h"

UENUM(BlueprintType)
enum class ESpeedPenalty : uint8 {
    Light,
    Medium,
    Heavy,
    SuperHeavy,
    LightCarryable,
    MediumCarryable,
    HeavyCarryable,
};

