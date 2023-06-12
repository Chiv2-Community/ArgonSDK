#pragma once
#include "CoreMinimal.h"
#include "EEarlyHitPolicy.generated.h"

UENUM(BlueprintType)
enum class EEarlyHitPolicy : uint8 {
    Nothing,
    Thwack,
    HitSuccess,
    Blocked,
    Interrupt,
    Stagger,
    Stun,
    Knockdown,
    WorldHit,
    Cancel,
};

