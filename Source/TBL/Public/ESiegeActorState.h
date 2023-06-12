#pragma once
#include "CoreMinimal.h"
#include "ESiegeActorState.generated.h"

UENUM(BlueprintType)
enum class ESiegeActorState : uint8 {
    None,
    Idle,
    Pushing,
    Open,
    Close,
};

