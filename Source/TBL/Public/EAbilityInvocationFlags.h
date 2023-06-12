#pragma once
#include "CoreMinimal.h"
#include "EAbilityInvocationFlags.generated.h"

UENUM(BlueprintType)
enum class EAbilityInvocationFlags : uint8 {
    None,
    FxAmmo,
    SkipReplication,
};

