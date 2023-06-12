#pragma once
#include "CoreMinimal.h"
#include "EActionPriorityLevel.generated.h"

UENUM(BlueprintType)
enum class EActionPriorityLevel : uint8 {
    Standard,
    Emergency,
};

