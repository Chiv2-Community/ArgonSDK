#pragma once
#include "CoreMinimal.h"
#include "EStopTimerPolicy.generated.h"

UENUM(BlueprintType)
enum class EStopTimerPolicy : uint8 {
    OnNextAbility,
    OnGameplayComplete,
    OnTimeOut,
};

