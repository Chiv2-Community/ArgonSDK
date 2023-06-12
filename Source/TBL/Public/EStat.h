#pragma once
#include "CoreMinimal.h"
#include "EStat.generated.h"

UENUM(BlueprintType)
enum class EStat : uint8 {
    None,
    Health,
    MaxHealth,
    Overheal,
    Stamina,
    MaxStamina,
};

