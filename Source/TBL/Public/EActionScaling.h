#pragma once
#include "CoreMinimal.h"
#include "EActionScaling.generated.h"

UENUM(BlueprintType)
namespace EActionScaling {
    enum Type {
        None,
        OneTime,
        Continuous,
    };
}

