#pragma once
#include "CoreMinimal.h"
#include "EStatTypingRule.generated.h"

UENUM(BlueprintType)
enum class EStatTypingRule : uint8 {
    Int32,
    Bool,
    FloatTruncated,
    FloatEncoded,
    DoubleEncoded,
};

