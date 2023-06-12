#pragma once
#include "CoreMinimal.h"
#include "EEmoteType.generated.h"

UENUM(BlueprintType)
enum class EEmoteType : uint8 {
    VO,
    UpperBody,
    UpperBodyInterruptible,
    RootMotion,
    RootMotionInterruptible,
    Lasting,
    Dynamic,
};

