#pragma once
#include "CoreMinimal.h"
#include "EHeldBehavior.generated.h"

UENUM(BlueprintType)
enum class EHeldBehavior : uint8 {
    None,
    UseHoldingState,
    HoldRelease,
};

