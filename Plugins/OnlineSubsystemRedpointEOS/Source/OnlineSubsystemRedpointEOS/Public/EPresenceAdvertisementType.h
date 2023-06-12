#pragma once
#include "CoreMinimal.h"
#include "EPresenceAdvertisementType.generated.h"

UENUM(BlueprintType)
enum class EPresenceAdvertisementType : uint8 {
    None,
    Party,
    Session,
};

