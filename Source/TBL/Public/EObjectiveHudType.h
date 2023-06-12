#pragma once
#include "CoreMinimal.h"
#include "EObjectiveHudType.generated.h"

UENUM(BlueprintType)
namespace EObjectiveHudType {
    enum Type {
        None,
        PushBomb,
        TeamScoreVictory,
        ScoreTicks,
        MAX,
    };
}

