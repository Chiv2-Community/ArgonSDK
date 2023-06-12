#pragma once
#include "CoreMinimal.h"
#include "EAutorunMovementMode.generated.h"

UENUM(BlueprintType)
enum class EAutorunMovementMode : uint8 {
    Invalid,
    Stop,
    Sprint,
    Run,
    Walk,
    Crouchwalk,
};

