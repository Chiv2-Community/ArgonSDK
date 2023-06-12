#pragma once
#include "CoreMinimal.h"
#include "EButtonAnimationStyle.generated.h"

UENUM(BlueprintType)
namespace EButtonAnimationStyle {
    enum Type {
        Normal,
        Click,
        Hovered,
        Leave,
        HoveredSelected,
        LeaveSelected,
        Release,
    };
}

