#pragma once
#include "CoreMinimal.h"
#include "ECombatStateBehavior.generated.h"

UENUM(BlueprintType)
enum class ECombatStateBehavior : uint8 {
    MeleeAttack,
    DrawnRangedAttack,
    ImmediateRangedAttack,
    ChargeAttack,
};

