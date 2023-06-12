#pragma once
#include "CoreMinimal.h"
#include "EActionFlags.generated.h"

UENUM(BlueprintType)
namespace EActionFlags {
    enum Type {
        None,
        Enabled,
        Instanced,
        ManualComplete = 0x4,
        Autonomous = 0x8,
        Cosmetic = 0x10,
        EActionFlags_MAX = 0xFF,
    };
}

