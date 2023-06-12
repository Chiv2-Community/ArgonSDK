#pragma once
#include "CoreMinimal.h"
#include "EOutOfCombatZoneVolumeActivateDeactivateAction.generated.h"

UENUM(BlueprintType)
enum class EOutOfCombatZoneVolumeActivateDeactivateAction : uint8 {
    Activate,
    Deactivate,
};

