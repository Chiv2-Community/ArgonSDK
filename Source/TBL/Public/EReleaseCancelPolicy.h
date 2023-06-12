#pragma once
#include "CoreMinimal.h"
#include "EReleaseCancelPolicy.generated.h"

UENUM(BlueprintType)
enum class EReleaseCancelPolicy : uint8 {
    CannotBeCancelled,
    CanCancelToRecovery,
};

