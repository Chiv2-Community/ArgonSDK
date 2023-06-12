#pragma once
#include "CoreMinimal.h"
#include "EWeaponTipResult.generated.h"

UENUM(BlueprintType)
enum class EWeaponTipResult : uint8 {
    Hit,
    IgnoreHit,
    DelayHit,
};

