#pragma once
#include "CoreMinimal.h"
#include "ECaptureVolumeControlType.generated.h"

UENUM(BlueprintType)
namespace ECaptureVolumeControlType {
    enum Type {
        TeamWithGreatestNumbers,
        OneEnemyCanBlock,
        NeverBlock,
    };
}

