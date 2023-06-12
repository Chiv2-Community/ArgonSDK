#pragma once
#include "CoreMinimal.h"
#include "ECharacterControlStat.generated.h"

UENUM(BlueprintType)
enum class ECharacterControlStat : uint8 {
    MovementSpeed,
    SprintBaseSpeed,
    StrafeSpeedModifier,
    ForwardSpeedModifier,
    BackSpeedModifier,
    HorizontalTurnRatePercent,
    VerticalTurnRatePercent,
    LeftTurnRatePercent,
    RightTurnRatePercent,
    UpTurnRatePercent,
    DownTurnRatePercent,
    ReverseTurnRatePercent,
    MAX,
};

