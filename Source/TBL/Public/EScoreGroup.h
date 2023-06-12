#pragma once
#include "CoreMinimal.h"
#include "EScoreGroup.generated.h"

UENUM(BlueprintType)
enum class EScoreGroup : uint8 {
    Player,
    Standalone,
    Objective,
    Healing,
};

