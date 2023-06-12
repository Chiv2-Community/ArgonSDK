#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPlatform.generated.h"

UENUM(BlueprintType)
enum class ECrossplayPlatform : uint8 {
    PlayStation,
    Xbox,
    Steam,
    Epic,
    Count,
    Invalid,
};

