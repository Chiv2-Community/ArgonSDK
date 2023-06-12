#pragma once
#include "CoreMinimal.h"
#include "EPickupEquipOptions.generated.h"

UENUM(BlueprintType)
enum class EPickupEquipOptions : uint8 {
    Equip,
    EquipImmediately,
    LeaveUnequipped,
};

