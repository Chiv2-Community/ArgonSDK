#pragma once
#include "CoreMinimal.h"
#include "EFrameThrottleBranch.generated.h"

UENUM(BlueprintType)
enum class EFrameThrottleBranch : uint8 {
    Allowed,
    NotAllowed,
};

