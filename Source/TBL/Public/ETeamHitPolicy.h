#pragma once
#include "CoreMinimal.h"
#include "ETeamHitPolicy.generated.h"

UENUM(BlueprintType)
enum class ETeamHitPolicy : uint8 {
    Nothing,
    Thwack,
    WorldHit,
    Blocked,
};

