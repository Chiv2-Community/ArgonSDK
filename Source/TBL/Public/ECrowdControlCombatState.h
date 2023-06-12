#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlCombatState.generated.h"

UENUM(BlueprintType)
enum class ECrowdControlCombatState : uint8 {
    Interrupt,
    Stagger,
    Knockdown,
    Stun,
    DownedStagger,
};

