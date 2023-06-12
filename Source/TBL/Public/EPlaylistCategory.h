#pragma once
#include "CoreMinimal.h"
#include "EPlaylistCategory.generated.h"

UENUM(BlueprintType)
enum class EPlaylistCategory : uint8 {
    NOT_SHOWN,
    OBJECTIVE,
    ARENA,
    EVENT,
    CUSTOM_ONLY,
    TUTORIAL,
    TEAM_DEATHMATCH,
};

