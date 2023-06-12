#pragma once
#include "CoreMinimal.h"
#include "EMarkerType.generated.h"

UENUM(BlueprintType)
enum class EMarkerType : uint8 {
    Objective,
    NonObjective,
    Hostile,
    Invalid,
};

