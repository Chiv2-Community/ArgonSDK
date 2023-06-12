#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemSlot.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemSlot : uint8 {
    Carryable,
    Primary,
    Secondary,
    Shield,
    Knife,
    Fists,
    Item,
    Bandage,
    Ammo,
    Custom,
    OffhandPrimary,
    Downed,
    Quiver,
    Novelty,
    Special,
    MAX,
};

