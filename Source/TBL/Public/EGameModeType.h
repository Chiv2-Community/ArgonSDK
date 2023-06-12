#pragma once
#include "CoreMinimal.h"
#include "EGameModeType.generated.h"

UENUM(BlueprintType)
namespace EGameModeType {
    enum Type {
        TeamObjective,
        TeamDeathMatch,
        FreeForAll,
        Symmetrical,
        LastTeamStanding,
        CapturePoint,
        Pushable,
        CaptureTheFlag,
        Arena,
        Scenario,
        Brawl,
        Volley,
        Jousting,
        PeasantRoyale,
        MAX,
    };
}

