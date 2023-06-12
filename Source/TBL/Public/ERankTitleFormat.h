#pragma once
#include "CoreMinimal.h"
#include "ERankTitleFormat.generated.h"

UENUM(BlueprintType)
enum class ERankTitleFormat : uint8 {
    NoFormat,
    RomanNumerals,
    ArabicNumberals,
};

