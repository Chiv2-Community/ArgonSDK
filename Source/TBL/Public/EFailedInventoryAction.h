#pragma once
#include "CoreMinimal.h"
#include "EFailedInventoryAction.generated.h"

UENUM(BlueprintType)
enum class EFailedInventoryAction : uint8 {
    None,
    EquipBandage,
    BandageAtFullHealth,
    BandageRegenAtFullHealth,
    NoThrowableEquipped,
    NoStacks,
    CannotUseItem,
    CannotEquipSpecial,
    CannotEquipPrimary,
    CannotEquipSecondary,
    CannotEquipKnife,
    CannotEquipFists,
    CannotEquipItem,
    CannotEquipNovelty,
    OutOfCombat,
};

