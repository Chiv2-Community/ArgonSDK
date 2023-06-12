#pragma once
#include "CoreMinimal.h"
#include "EPushingDirection.generated.h"

UENUM(BlueprintType)
enum class EPushingDirection : uint8 {
    LeftOrRight,
    Forward,
    Backwards,
};

