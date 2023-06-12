#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemCondition.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemCondition : uint8 {
    NoCondition,
    OffHandMustBeFree,
    MustBePrimaryWeapon,
    MustBeOffHandWeapon,
    OnlyAs1hWeapon,
    OnlyAs2hWeapon,
};

