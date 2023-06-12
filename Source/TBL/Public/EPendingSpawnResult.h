#pragma once
#include "CoreMinimal.h"
#include "EPendingSpawnResult.generated.h"

UENUM(BlueprintType)
enum class EPendingSpawnResult : uint8 {
    Success,
    NotReady,
    Invalid,
};

