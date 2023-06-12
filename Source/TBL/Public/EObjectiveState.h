#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EObjectiveState : uint8 {
    Disabled,
    Neutral,
    Active,
    Blocked,
    Complete,
};

