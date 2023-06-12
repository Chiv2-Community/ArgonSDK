#pragma once
#include "CoreMinimal.h"
#include "EAttachedState.generated.h"

UENUM(BlueprintType)
enum class EAttachedState : uint8 {
    Free,
    Attached,
    Detached,
    Hide,
};

