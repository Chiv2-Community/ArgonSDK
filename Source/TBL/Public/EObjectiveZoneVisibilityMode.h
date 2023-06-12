#pragma once
#include "CoreMinimal.h"
#include "EObjectiveZoneVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EObjectiveZoneVisibilityMode : uint8 {
    None,
    HideWhenInside,
    HideWhenOutside,
};

