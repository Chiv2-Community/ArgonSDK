#pragma once
#include "CoreMinimal.h"
#include "EStoreListing.generated.h"

UENUM(BlueprintType)
enum class EStoreListing : uint8 {
    StoreOffers,
    Addons,
    BaseGame,
    Featured,
    Hidden = 0xFF,
};

