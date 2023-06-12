#pragma once
#include "CoreMinimal.h"
#include "EPassiveShieldPolicy.generated.h"

UENUM(BlueprintType)
enum class EPassiveShieldPolicy : uint8 {
    TakeHit,
    Block,
    BreakShield,
    Ignore,
};

