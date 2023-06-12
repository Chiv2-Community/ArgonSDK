#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingQueueCategory.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingQueueCategory : uint8 {
    Normal,
    Competitive,
    Ranked,
};

