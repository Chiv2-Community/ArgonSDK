#pragma once
#include "CoreMinimal.h"
#include "EPlayFabMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EPlayFabMatchmakingState : uint8 {
    Inactive,
    WaitingForQos,
    WaitingForTicket,
    PollingForMatch,
    PollingForGameServer,
    PollingBackfill,
    Invalid,
};

