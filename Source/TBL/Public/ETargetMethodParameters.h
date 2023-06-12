#pragma once
#include "CoreMinimal.h"
#include "ETargetMethodParameters.generated.h"

UENUM(BlueprintType)
namespace ETargetMethodParameters {
    enum Type {
        Initiator,
        Target,
        WorldLocation,
        CaptureFromTargetMethod,
    };
}

