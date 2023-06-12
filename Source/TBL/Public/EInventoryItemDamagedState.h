#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemDamagedState.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemDamagedState : uint8 {
    Healthy,
    Damaged,
    Destroyed,
};

