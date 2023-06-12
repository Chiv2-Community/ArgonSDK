#pragma once
#include "CoreMinimal.h"
#include "ELobbyDistance.generated.h"

UENUM(BlueprintType)
enum class ELobbyDistance : uint8 {
    EDIST_Near,
    EDIST_Default,
    EDIST_Far,
    EDIST_Worldwide,
    EDIST_MAX UMETA(Hidden),
};

