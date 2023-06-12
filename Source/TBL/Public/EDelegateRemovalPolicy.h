#pragma once
#include "CoreMinimal.h"
#include "EDelegateRemovalPolicy.generated.h"

UENUM(BlueprintType)
enum class EDelegateRemovalPolicy : uint8 {
    OnNextAbility,
    OnGameplayComplete,
    OnTimeOut,
};

