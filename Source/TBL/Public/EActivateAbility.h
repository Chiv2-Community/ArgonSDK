#pragma once
#include "CoreMinimal.h"
#include "EActivateAbility.generated.h"

UENUM(BlueprintType)
enum class EActivateAbility : uint8 {
    StartOfCombatState,
    EndOfCombatState,
    AnimNotify,
};

