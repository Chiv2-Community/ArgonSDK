#pragma once
#include "CoreMinimal.h"
#include "EDuration.generated.h"

UENUM(BlueprintType)
namespace EDuration {
    enum Type {
        None,
        Instant,
        Lasting,
        Infinite,
        StateBased,
    };
}

