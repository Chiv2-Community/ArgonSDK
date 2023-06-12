#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionType : uint8 {
    Instant,
    Mounted,
    LockedIn,
};

