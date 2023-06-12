#pragma once
#include "CoreMinimal.h"
#include "EContextVoType.generated.h"

UENUM(BlueprintType)
enum class EContextVoType : uint8 {
    Repeated,
    SendOnce,
};

