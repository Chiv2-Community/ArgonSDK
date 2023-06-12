#pragma once
#include "CoreMinimal.h"
#include "EAttackTypeCategory.generated.h"

UENUM(BlueprintType)
enum class EAttackTypeCategory : uint8 {
    Standard,
    QuickStrike,
    Special,
    PassiveCharge,
};

