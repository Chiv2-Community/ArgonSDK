#pragma once
#include "CoreMinimal.h"
#include "EStartMovementResult.generated.h"

UENUM(BlueprintType)
namespace EStartMovementResult {
    enum Type {
        Invalid,
        NoSequence,
        CanExecuteFailed,
        LowPriority,
        Success,
    };
}

