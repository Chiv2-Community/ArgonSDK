#pragma once
#include "CoreMinimal.h"
#include "EUpdateMode.generated.h"

UENUM(BlueprintType)
enum class EUpdateMode : uint8 {
    None,
    TickEveryFrame,
    SkipAnimations,
};

