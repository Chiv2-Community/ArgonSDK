#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingQueueType.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingQueueType : uint8 {
    Standalone,
    Quickplay,
    QuickplayAndStandalone,
};

