#pragma once
#include "CoreMinimal.h"
#include "EAiCombatStrafing.generated.h"

UENUM(BlueprintType)
enum class EAiCombatStrafing : uint8 {
    SafeStrafe,
    BypassParry,
    CirclyStrafe,
};

