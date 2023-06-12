#pragma once
#include "CoreMinimal.h"
#include "EOnlineAccountProperty.generated.h"

UENUM(BlueprintType)
enum class EOnlineAccountProperty : uint8 {
    None,
    Title,
    Level,
    Debug = 0x4,
};

