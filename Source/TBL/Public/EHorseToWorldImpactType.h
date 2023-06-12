#pragma once
#include "CoreMinimal.h"
#include "EHorseToWorldImpactType.generated.h"

UENUM(BlueprintType)
enum class EHorseToWorldImpactType : uint8 {
    StraightImpact,
    GlancingImpact,
    Bump,
};

