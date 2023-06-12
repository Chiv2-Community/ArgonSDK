#pragma once
#include "CoreMinimal.h"
#include "EInventoryVisibilityCondition.generated.h"

UENUM(BlueprintType)
enum class EInventoryVisibilityCondition : uint8 {
    VisibleIfEquipped,
    VisibleIfUnEquipped,
};

