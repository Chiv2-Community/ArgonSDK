#pragma once
#include "CoreMinimal.h"
#include "EAbilitiesMovementSequence.generated.h"

UENUM(BlueprintType)
enum class EAbilitiesMovementSequence : uint8 {
    WindupLunge,
    Lunge,
    LungeLeft,
    LungeRight,
    HorseLunge,
    Knockback,
    ParrySuccess,
    Blocked,
};

