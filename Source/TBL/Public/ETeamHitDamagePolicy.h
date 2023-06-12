#pragma once
#include "CoreMinimal.h"
#include "ETeamHitDamagePolicy.generated.h"

UENUM(BlueprintType)
enum class ETeamHitDamagePolicy : uint8 {
    DealDamage,
    DoNotDealDamage,
};

