#pragma once
#include "CoreMinimal.h"
#include "EFactionRuleOperator.generated.h"

UENUM(BlueprintType)
enum class EFactionRuleOperator : uint8 {
    EqualTo,
    NotEqualTo,
};

