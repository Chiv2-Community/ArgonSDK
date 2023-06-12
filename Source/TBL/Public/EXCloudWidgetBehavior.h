#pragma once
#include "CoreMinimal.h"
#include "EXCloudWidgetBehavior.generated.h"

UENUM(BlueprintType)
enum class EXCloudWidgetBehavior : uint8 {
    Scale_ButtonCallout,
    Toggle_Visible,
    Toggle_NotHitTestable,
    Toggle_Collapsed,
};

