#pragma once
#include "CoreMinimal.h"
#include "EQueueResponse.generated.h"

UENUM(BlueprintType)
enum class EQueueResponse : uint8 {
    Success,
    Failed,
    InvalidController,
    SpawnerFull,
    ControllerNotAllowed,
    MAX,
};

