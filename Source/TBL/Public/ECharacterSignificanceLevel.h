#pragma once
#include "CoreMinimal.h"
#include "ECharacterSignificanceLevel.generated.h"

UENUM(BlueprintType)
enum class ECharacterSignificanceLevel : uint8 {
    Hidden,
    Low,
    Medium,
    High,
    Critical,
    Num,
    None = 0xFF,
};

