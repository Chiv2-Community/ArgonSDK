#pragma once
#include "CoreMinimal.h"
#include "ESeatSelectionMode.generated.h"

UENUM(BlueprintType)
enum class ESeatSelectionMode : uint8 {
    Sequential,
    Random,
};

