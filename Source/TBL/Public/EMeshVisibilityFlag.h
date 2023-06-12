#pragma once
#include "CoreMinimal.h"
#include "EMeshVisibilityFlag.generated.h"

UENUM(BlueprintType)
enum class EMeshVisibilityFlag : uint8 {
    None,
    SpawnIn,
    Cinematic,
    MAX,
};

