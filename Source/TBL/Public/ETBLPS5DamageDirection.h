#pragma once
#include "CoreMinimal.h"
#include "ETBLPS5DamageDirection.generated.h"

UENUM()
enum class ETBLPS5DamageDirection : int8 {
    INVALID = -0x1,
    Left_Haptic,
    Right_Haptic,
    Forward,
    MAX,
};

