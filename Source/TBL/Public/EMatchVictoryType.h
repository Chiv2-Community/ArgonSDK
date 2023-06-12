#pragma once
#include "CoreMinimal.h"
#include "EMatchVictoryType.generated.h"

UENUM(BlueprintType)
enum class EMatchVictoryType : uint8 {
    Victory,
    Defeat,
    Either,
};

