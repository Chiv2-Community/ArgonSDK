#pragma once
#include "CoreMinimal.h"
#include "EBlockingCategory.generated.h"

UENUM(BlueprintType)
enum class EBlockingCategory : uint8 {
    Light,
    Weak,
    Standard,
    Strong,
    Shield,
};

