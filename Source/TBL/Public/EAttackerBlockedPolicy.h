#pragma once
#include "CoreMinimal.h"
#include "EAttackerBlockedPolicy.generated.h"

UENUM(BlueprintType)
enum class EAttackerBlockedPolicy : uint8 {
    None,
    Parried,
    Stagger,
    Thwack,
    ParryBreak,
    HitSuccess,
    Deflect,
};

