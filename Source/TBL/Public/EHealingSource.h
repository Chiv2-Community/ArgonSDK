#pragma once
#include "CoreMinimal.h"
#include "EHealingSource.generated.h"

UENUM(BlueprintType)
enum class EHealingSource : uint8 {
    None,
    Bandage,
    BandageKit,
    Banner,
    Food,
    Restoration,
    InspiredHorn,
};

