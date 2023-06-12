#pragma once
#include "CoreMinimal.h"
#include "EInputReplayState.generated.h"

UENUM(BlueprintType)
namespace EInputReplayState {
    enum Type {
        Disabled,
        Playing,
        Recording,
    };
}

