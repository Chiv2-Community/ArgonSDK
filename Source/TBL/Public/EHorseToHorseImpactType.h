#pragma once
#include "CoreMinimal.h"
#include "EHorseToHorseImpactType.generated.h"

UENUM(BlueprintType)
enum class EHorseToHorseImpactType : uint8 {
    StraightImpact,
    SideImpact,
    BackImpact,
};

