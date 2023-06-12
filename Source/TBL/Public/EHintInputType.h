#pragma once
#include "CoreMinimal.h"
#include "EHintInputType.generated.h"

UENUM(BlueprintType)
namespace EHintInputType {
    enum Type {
        Any,
        PC_Only,
        Gamepad_Only,
    };
}

