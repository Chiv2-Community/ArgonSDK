#pragma once
#include "CoreMinimal.h"
#include "EEquippedState.generated.h"

UENUM(BlueprintType)
enum class EEquippedState : uint8 {
    Free,
    Equipping,
    Equipped,
    Unequipping,
    Unequipped,
    Hide,
    Using,
    Pickup,
    EquipFromStanding,
    UnequipToStanding,
    Reloading,
    EquippingFromParryBreak,
};

