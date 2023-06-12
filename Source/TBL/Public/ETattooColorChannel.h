#pragma once
#include "CoreMinimal.h"
#include "ETattooColorChannel.generated.h"

UENUM(BlueprintType)
enum class ETattooColorChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

