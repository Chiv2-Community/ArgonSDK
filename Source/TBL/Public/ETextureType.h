#pragma once
#include "CoreMinimal.h"
#include "ETextureType.generated.h"

UENUM(BlueprintType)
enum class ETextureType : uint8 {
    Color,
    Mask,
    Normal,
    Utility,
    Heraldry,
    Max,
};

