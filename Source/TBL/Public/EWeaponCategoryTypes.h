#pragma once
#include "CoreMinimal.h"
#include "EWeaponCategoryTypes.generated.h"

UENUM(BlueprintType)
enum class EWeaponCategoryTypes : uint8 {
    None,
    Ranged,
    TwoHanded,
    OneHanded,
    Thrown,
    Novelty,
    Shield,
};

