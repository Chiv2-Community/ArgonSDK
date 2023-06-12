#pragma once
#include "CoreMinimal.h"
#include "EHorseMovementInput.generated.h"

UENUM(BlueprintType)
enum class EHorseMovementInput : uint8 {
    None,
    Forward,
    ForwardTurn,
    Turn,
    BackwardTurn,
    ForwardStrafe,
    Strafe,
    BackwardStafe,
    Backward,
};

