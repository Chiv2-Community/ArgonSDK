#pragma once
#include "CoreMinimal.h"
#include "EGameModeMessageDisplayType.generated.h"

UENUM(BlueprintType)
enum class EGameModeMessageDisplayType : uint8 {
    GameModeMessage,
    ChatOnlyMessage,
    GameModeOnlyMessage,
    KillFeedMessage,
};

