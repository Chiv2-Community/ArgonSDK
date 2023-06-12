#pragma once
#include "CoreMinimal.h"
#include "EAiMeleeCombatMode.generated.h"

UENUM(BlueprintType)
enum class EAiMeleeCombatMode : uint8 {
    OutOfCombat,
    Engaging,
    InCombat,
    Disengaging,
};

