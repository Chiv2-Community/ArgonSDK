#pragma once
#include "CoreMinimal.h"
#include "ESpawnSequenceActivateDeactivateAction.generated.h"

UENUM(BlueprintType)
enum class ESpawnSequenceActivateDeactivateAction : uint8 {
    Activate,
    Deactivate,
};

