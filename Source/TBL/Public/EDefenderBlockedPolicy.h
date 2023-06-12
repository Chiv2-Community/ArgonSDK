#pragma once
#include "CoreMinimal.h"
#include "EDefenderBlockedPolicy.generated.h"

UENUM(BlueprintType)
enum class EDefenderBlockedPolicy : uint8 {
    None,
    Parry,
    WeakParry,
    TakeHit,
    Stagger,
    Stun,
    Knockdown,
    ParryBreak,
    BreakShield,
    Blocked,
    Thwack,
};

