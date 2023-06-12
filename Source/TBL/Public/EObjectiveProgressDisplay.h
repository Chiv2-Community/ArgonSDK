#pragma once
#include "CoreMinimal.h"
#include "EObjectiveProgressDisplay.generated.h"

UENUM(BlueprintType)
namespace EObjectiveProgressDisplay {
    enum Type {
        SingleTeamBar,
        TwoTeamBars,
        PushBar,
    };
}

