#pragma once
#include "CoreMinimal.h"
#include "EStageActorActions.generated.h"

UENUM(BlueprintType)
enum class EStageActorActions : uint8 {
    AwardScore,
    ApplyBonusTime,
};

