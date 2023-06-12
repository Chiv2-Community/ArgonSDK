#pragma once
#include "CoreMinimal.h"
#include "EInputActionMode.generated.h"

UENUM(BlueprintType)
enum class EInputActionMode : uint8 {
    None,
    WhitelistedOnly,
    InGameWhitelistedOnly,
};

