#pragma once
#include "CoreMinimal.h"
#include "EEpicEndGameState.generated.h"

UENUM(BlueprintType)
namespace EEpicEndGameState {
    enum Type {
        None,
        Start,
        End,
    };
}

