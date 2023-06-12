#pragma once
#include "CoreMinimal.h"
#include "ECollisionInteraction.generated.h"

UENUM(BlueprintType)
enum class ECollisionInteraction : uint8 {
    Knockoff,
    Stagger,
    Rear,
    BumpOff,
    Push,
    None,
};

