#pragma once
#include "CoreMinimal.h"
#include "EInteractCombatState.generated.h"

UENUM(BlueprintType)
enum class EInteractCombatState : uint8 {
    Interact,
    Loot,
};

