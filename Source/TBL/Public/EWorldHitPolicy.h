#pragma once
#include "CoreMinimal.h"
#include "EWorldHitPolicy.generated.h"

UENUM(BlueprintType)
enum class EWorldHitPolicy : uint8 {
    Nothing,
    WorldHit,
    Thwack,
    Stagger,
    Blocked,
    HitSuccess,
};

