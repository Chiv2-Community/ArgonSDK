#pragma once
#include "CoreMinimal.h"
#include "EAkDiffractionFlags.generated.h"

UENUM(BlueprintType)
enum class EAkDiffractionFlags : uint8 {
    UseBuiltInParam,
    UseObstruction,
    CalcEmitterVirtualPosition = 0x3,
};

