#pragma once
#include "CoreMinimal.h"
#include "EPendingSpawnRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPendingSpawnRequestResult : uint8 {
    Pending,
    Consumed,
    Failed,
    Deferred,
};

