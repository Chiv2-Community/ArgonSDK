#pragma once
#include "CoreMinimal.h"
#include "ERewardPolicy.generated.h"

UENUM(BlueprintType)
enum class ERewardPolicy : uint8 {
    None,
    Immediate,
    Notification,
};

