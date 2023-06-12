#pragma once
#include "CoreMinimal.h"
#include "EStrafeDirection.generated.h"

UENUM(BlueprintType)
enum class EStrafeDirection : uint8 {
    None,
    Left,
    Right,
};

