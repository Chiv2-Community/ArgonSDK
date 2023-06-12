#pragma once
#include "CoreMinimal.h"
#include "ETBLPS5HapticType.generated.h"

UENUM(BlueprintType)
enum class ETBLPS5HapticType : uint8 {
    Pad_Rumble,
    Trigger_Effect,
    Pad_And_Trigger,
};

