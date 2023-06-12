#pragma once
#include "CoreMinimal.h"
#include "EHorseTurnInput.generated.h"

UENUM(BlueprintType)
enum class EHorseTurnInput : uint8 {
    None,
    TurnSlow,
    Turn,
    TurnFast,
};

