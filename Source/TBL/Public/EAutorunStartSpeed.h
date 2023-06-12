#pragma once
#include "CoreMinimal.h"
#include "EAutorunStartSpeed.generated.h"

UENUM(BlueprintType)
enum class EAutorunStartSpeed : uint8 {
    StartStopped,
    StartFullSpeed,
};

