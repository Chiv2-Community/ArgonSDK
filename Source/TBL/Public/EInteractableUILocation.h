#pragma once
#include "CoreMinimal.h"
#include "EInteractableUILocation.generated.h"

UENUM(BlueprintType)
enum class EInteractableUILocation : uint8 {
    AttachedToActor,
    Pinned,
};

