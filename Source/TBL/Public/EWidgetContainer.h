#pragma once
#include "CoreMinimal.h"
#include "EWidgetContainer.generated.h"

UENUM(BlueprintType)
enum class EWidgetContainer : uint8 {
    LookAt,
    ObjectiveBar,
    AlwaysVisible,
    HudMarker,
    HudZone,
};

