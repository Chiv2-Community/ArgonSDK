#pragma once
#include "CoreMinimal.h"
#include "ETargetMethodEvent.generated.h"

UENUM(BlueprintType)
namespace ETargetMethodEvent {
    enum Type {
        Hit,
        Missed,
    };
}

