#pragma once
#include "CoreMinimal.h"
#include "EVOType.generated.h"

UENUM(BlueprintType)
enum class EVOType : uint8 {
    Manual,
    Auto,
    Context,
    None,
};

