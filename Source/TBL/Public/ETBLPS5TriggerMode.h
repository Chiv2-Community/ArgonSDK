#pragma once
#include "CoreMinimal.h"
#include "ETBLPS5TriggerMode.generated.h"

UENUM(BlueprintType)
enum class ETBLPS5TriggerMode : uint8 {
    Off,
    Weapon_Mode,
    Vibration_Mode,
    Feedback_Mode,
};

