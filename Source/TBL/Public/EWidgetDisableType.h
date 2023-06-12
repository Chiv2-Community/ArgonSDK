#pragma once
#include "CoreMinimal.h"
#include "EWidgetDisableType.generated.h"

UENUM(BlueprintType)
enum class EWidgetDisableType : uint8 {
    Enabled,
    ShippingDisabledWIP,
    DisabledDemoMode,
};

