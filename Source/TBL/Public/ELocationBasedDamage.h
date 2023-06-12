#pragma once
#include "CoreMinimal.h"
#include "ELocationBasedDamage.generated.h"

UENUM(BlueprintType)
enum class ELocationBasedDamage : uint8 {
    UpperBody,
    LowerBody,
    Headshot,
};

