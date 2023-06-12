#pragma once
#include "CoreMinimal.h"
#include "EAllyMarkerLevel.generated.h"

UENUM(BlueprintType)
namespace EAllyMarkerLevel {
    enum Type {
        All,
        AllHumanPlayers,
        FriendsAndParty,
        None,
    };
}

