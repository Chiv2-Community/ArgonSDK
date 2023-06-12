#pragma once
#include "CoreMinimal.h"
#include "EGamepadBattleCryState.generated.h"

UENUM(BlueprintType)
enum class EGamepadBattleCryState : uint8 {
    NONE,
    PENDING_HOLD,
    HELD,
};

