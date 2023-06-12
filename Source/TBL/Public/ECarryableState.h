#pragma once
#include "CoreMinimal.h"
#include "ECarryableState.generated.h"

UENUM(BlueprintType)
namespace ECarryableState {
    enum Type {
        Idle,
        Locked,
        Spawned,
        ReadyForPickup,
        PickedUp,
        Dropped,
        Reset,
    };
}

