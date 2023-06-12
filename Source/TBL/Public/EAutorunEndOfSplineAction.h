#pragma once
#include "CoreMinimal.h"
#include "EAutorunEndOfSplineAction.generated.h"

UENUM(BlueprintType)
enum class EAutorunEndOfSplineAction : uint8 {
    RestoreFullControl,
    Nothing,
};

