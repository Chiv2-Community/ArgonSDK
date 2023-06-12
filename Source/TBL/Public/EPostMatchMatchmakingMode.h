#pragma once
#include "CoreMinimal.h"
#include "EPostMatchMatchmakingMode.generated.h"

UENUM()
enum class EPostMatchMatchmakingMode : int32 {
    None,
    MigrateToNewServer,
    MatchmakeToNewServer,
};

