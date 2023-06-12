#pragma once
#include "CoreMinimal.h"
#include "EDismountType.generated.h"

UENUM(BlueprintType)
enum class EDismountType : uint8 {
    Immediate,
    Knockdown,
};

