#pragma once
#include "CoreMinimal.h"
#include "EServerType.generated.h"

UENUM(BlueprintType)
enum class EServerType : uint8 {
    None,
    Offline,
    Online,
    Listen,
    MAX,
};

