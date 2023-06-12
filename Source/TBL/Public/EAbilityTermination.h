#pragma once
#include "CoreMinimal.h"
#include "EAbilityTermination.generated.h"

UENUM(BlueprintType)
namespace EAbilityTermination {
    enum Type {
        Cancelled,
        Interrupted,
    };
}

