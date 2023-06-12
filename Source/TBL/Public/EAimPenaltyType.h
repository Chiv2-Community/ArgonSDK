#pragma once
#include "CoreMinimal.h"
#include "EAimPenaltyType.generated.h"

UENUM(BlueprintType)
enum class EAimPenaltyType : uint8 {
    MovementState,
    Stamina,
    DrawTime,
    MAX,
};

