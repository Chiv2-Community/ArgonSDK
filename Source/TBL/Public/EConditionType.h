#pragma once
#include "CoreMinimal.h"
#include "EConditionType.generated.h"

UENUM(BlueprintType)
enum class EConditionType : uint8 {
    None,
    Downed,
    ShellShock,
    Bleeding,
    BleedingFatal,
    Burning,
    OnFire,
    Crippled,
    OutOfCombat,
    LeftArmMissing,
    RightArmMissing,
    LeftLegMissing,
    RightLegMissing,
    BandageKit,
    Inspired,
    MAX,
};

