#pragma once
#include "CoreMinimal.h"
#include "EMountVisibilityCondition.generated.h"

UENUM(BlueprintType)
enum class EMountVisibilityCondition : uint8 {
    VisibleIfMounted,
    VisibleIfNotMounted,
};

