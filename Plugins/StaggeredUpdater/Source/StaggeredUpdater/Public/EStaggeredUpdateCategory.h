#pragma once
#include "CoreMinimal.h"
#include "EStaggeredUpdateCategory.generated.h"

UENUM(BlueprintType)
enum class EStaggeredUpdateCategory : uint8 {
    Widget,
    HUDWidget,
    CheapHUDWidget,
    HudContainerWidget,
    AkComponentLow,
    AkComponentNormal,
    AkComponentHigh,
    AkReflectorOrPortal,
    UtilityAI,
    UtilityAIAbilities,
    MiscCosmetic,
    MAX,
};

