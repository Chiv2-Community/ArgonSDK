#pragma once
#include "CoreMinimal.h"
#include "ECatapultState.generated.h"

UENUM(BlueprintType)
enum class ECatapultState : uint8 {
    Disabled,
    Interactable,
    Pushable,
    Packaged,
    PackagedAndDisabled,
};

