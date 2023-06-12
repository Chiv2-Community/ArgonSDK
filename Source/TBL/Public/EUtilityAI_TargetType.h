#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_TargetType.generated.h"

UENUM(BlueprintType)
enum class EUtilityAI_TargetType : uint8 {
    None,
    Actors,
    Objects,
    Locations,
    Hybrid,
    EUtilityAI_MAX UMETA(Hidden),
};

