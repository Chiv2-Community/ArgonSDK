#pragma once
#include "CoreMinimal.h"
#include "EAlwaysOnMusicState.generated.h"

UENUM(BlueprintType)
enum class EAlwaysOnMusicState : uint8 {
    None,
    Tier1,
    Tier2,
    Tier3,
    Tier4,
    EndStageTransition,
    ObjectiveComplete,
};

