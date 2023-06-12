#pragma once
#include "CoreMinimal.h"
#include "ETeamDamageOptions.generated.h"

UENUM(BlueprintType)
enum class ETeamDamageOptions : uint8 {
    IgnoreDamage,
    ScaledDamage,
    FullDamage,
};

