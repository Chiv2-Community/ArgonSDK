#pragma once
#include "CoreMinimal.h"
#include "ETeamBalancePlayerSelect.generated.h"

UENUM(BlueprintType)
namespace ETeamBalancePlayerSelect {
    enum Type {
        Random,
        HighScore,
        MediumScore,
        LowScore,
        RecentJoin,
        None,
    };
}

