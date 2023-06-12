#pragma once
#include "CoreMinimal.h"
#include "EHorseToCharacterImpactType.generated.h"

UENUM(BlueprintType)
enum class EHorseToCharacterImpactType : uint8 {
    StraightImpact,
    GlancingImpact,
    Bump,
};

