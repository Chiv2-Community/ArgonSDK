#pragma once
#include "CoreMinimal.h"
#include "EMessagePriority.generated.h"

UENUM(BlueprintType)
enum class EMessagePriority : uint8 {
    LowPriority,
    MediumPriority,
    HighPriority,
};

