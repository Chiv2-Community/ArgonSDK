#pragma once
#include "CoreMinimal.h"
#include "EBombardState.generated.h"

UENUM(BlueprintType)
enum class EBombardState : uint8 {
    Disabled,
    Interactable,
    Pushable,
    Packaged,
    PackagedAndDisabled,
};

