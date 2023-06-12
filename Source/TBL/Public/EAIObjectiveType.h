#pragma once
#include "CoreMinimal.h"
#include "EAIObjectiveType.generated.h"

UENUM(BlueprintType)
namespace EAIObjectiveType {
    enum Type {
        Unknown,
        Capture,
        Push,
        PushDefend,
        Flag,
        FlagPlant,
    };
}

