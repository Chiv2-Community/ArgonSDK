#pragma once
#include "CoreMinimal.h"
#include "EHapticsVolumeSettings.generated.h"

UENUM(BlueprintType)
enum class EHapticsVolumeSettings : uint8 {
    HIGH_VOLUME,
    LOW_VOLUME,
    OFF,
};

