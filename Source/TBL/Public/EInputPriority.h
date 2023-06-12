#pragma once
#include "CoreMinimal.h"
#include "EInputPriority.generated.h"

UENUM(BlueprintType)
enum class EInputPriority : uint8 {
    Override,
    Reaction,
    High,
    Low,
    Idle,
};

