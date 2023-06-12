#pragma once
#include "CoreMinimal.h"
#include "ETargetMethodFlags.generated.h"

UENUM(BlueprintType)
namespace ETargetMethodFlags {
    enum Type {
        None,
        Server = 0x2,
        StartWithParent = 0x4,
    };
}

