#pragma once
#include "CoreMinimal.h"
#include "EProjectileSweepType.generated.h"

UENUM(BlueprintType)
enum class EProjectileSweepType : uint8 {
    Default,
    SweepForPawns,
    SpectatorCamera,
};

