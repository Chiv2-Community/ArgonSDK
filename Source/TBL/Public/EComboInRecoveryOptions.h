#pragma once
#include "CoreMinimal.h"
#include "EComboInRecoveryOptions.generated.h"

UENUM(BlueprintType)
namespace EComboInRecoveryOptions {
    enum Type {
        UseDefault,
        CanCombo,
        CannotCombo,
    };
}

