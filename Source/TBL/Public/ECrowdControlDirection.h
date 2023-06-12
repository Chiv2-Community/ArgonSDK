#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlDirection.generated.h"

UENUM(BlueprintType)
enum class ECrowdControlDirection : uint8 {
    Default,
    Front,
    Left,
    Back,
    Right,
};

