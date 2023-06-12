#pragma once
#include "CoreMinimal.h"
#include "EWindupInputReleasedPolicy.generated.h"

UENUM(BlueprintType)
enum class EWindupInputReleasedPolicy : uint8 {
    Nothing,
    GotoIdle,
    DropItem,
};

