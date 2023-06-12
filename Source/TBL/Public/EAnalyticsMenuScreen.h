#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsMenuScreen.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsMenuScreen : uint8 {
    None,
    CustomizationClassSelection,
    CustomizationScreen,
    CampaignSelectionScreen,
};

