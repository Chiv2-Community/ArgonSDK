#pragma once
#include "CoreMinimal.h"
#include "EGameUpdateType.generated.h"

UENUM(BlueprintType)
enum class EGameUpdateType : uint8 {
    Invalid,
    Hotfix,
    Patch,
    ContentUpdate,
    Expansion,
};

