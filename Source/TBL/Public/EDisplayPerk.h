#pragma once
#include "CoreMinimal.h"
#include "EDisplayPerk.generated.h"

UENUM(BlueprintType)
enum class EDisplayPerk : uint8 {
    DisplayAsPerk,
    DisplayAsAbility,
    DisplayAsVulnerability,
    DisplayAsChargingMethod,
};

