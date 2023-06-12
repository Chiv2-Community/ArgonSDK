#pragma once
#include "CoreMinimal.h"
#include "EProConsoleOption.generated.h"

UENUM(BlueprintType)
enum class EProConsoleOption : uint8 {
    Balanced,
    Framerate,
    Fidelity,
};

