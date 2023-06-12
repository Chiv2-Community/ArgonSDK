#pragma once
#include "CoreMinimal.h"
#include "EInterpolateOverTimeAction.generated.h"

UENUM(BlueprintType)
namespace EInterpolateOverTimeAction {
    enum Type {
        PlayFromStart,
        Pause,
        Resume,
        Reset,
        Reverse,
    };
}

