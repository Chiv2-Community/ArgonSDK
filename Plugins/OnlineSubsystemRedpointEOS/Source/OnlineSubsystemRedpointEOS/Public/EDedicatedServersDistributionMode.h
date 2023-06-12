#pragma once
#include "CoreMinimal.h"
#include "EDedicatedServersDistributionMode.generated.h"

UENUM(BlueprintType)
enum class EDedicatedServersDistributionMode : uint8 {
    DevelopersOnly,
    DevelopersAndPlayers,
    PlayersOnly,
};

