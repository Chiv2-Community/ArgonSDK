#pragma once
#include "CoreMinimal.h"
#include "ETBLRarity.generated.h"

UENUM(BlueprintType)
enum class ETBLRarity : uint8 {
    None,
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

