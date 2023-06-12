#pragma once
#include "CoreMinimal.h"
#include "EPushableMovementType.generated.h"

UENUM(BlueprintType)
enum class EPushableMovementType : uint8 {
    INDEPENDENT,
    LEADER,
    FOLLOWER,
};

