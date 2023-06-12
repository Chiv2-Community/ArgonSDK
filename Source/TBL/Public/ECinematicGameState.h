#pragma once
#include "CoreMinimal.h"
#include "ECinematicGameState.generated.h"

UENUM(BlueprintType)
enum class ECinematicGameState : uint8 {
    NotReplicated,
    Inactive,
    Forced,
};

