#pragma once
#include "CoreMinimal.h"
#include "EMod.generated.h"

UENUM(BlueprintType)
namespace EMod {
    enum Type {
        Invulnerable,
        DisableStaminaDrain,
        UnlimitedAmmo,
        CannotUseInteractables,
    };
}

