#pragma once
#include "CoreMinimal.h"
#include "EInteractableRechargeRule.generated.h"

UENUM(BlueprintType)
enum class EInteractableRechargeRule : uint8 {
    RechargeWhenBelowMaxUses,
    RechargeWhenAtZeroUses,
    RechargeByManualControl,
};

