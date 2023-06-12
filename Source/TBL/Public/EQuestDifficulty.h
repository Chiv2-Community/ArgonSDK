#pragma once
#include "CoreMinimal.h"
#include "EQuestDifficulty.generated.h"

UENUM(BlueprintType)
enum class EQuestDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    Impossible,
};

