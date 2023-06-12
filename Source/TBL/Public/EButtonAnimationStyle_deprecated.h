#pragma once
#include "CoreMinimal.h"
#include "EButtonAnimationStyle_deprecated.generated.h"

UENUM(BlueprintType)
namespace EButtonAnimationStyle_deprecated {
    enum Type {
        Normal,
        Click,
        Hovered,
        Leave,
        HoveredSelected,
        LeaveSelected,
        EButtonAnimationStyle_MAX UMETA(Hidden),
    };
}

