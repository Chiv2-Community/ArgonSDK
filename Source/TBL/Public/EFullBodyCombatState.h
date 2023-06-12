#pragma once
#include "CoreMinimal.h"
#include "EFullBodyCombatState.generated.h"

UENUM(BlueprintType)
enum class EFullBodyCombatState : uint8 {
    StartOfCombatState,
    EndOfCombatState,
};

