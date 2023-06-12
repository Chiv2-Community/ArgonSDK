#pragma once
#include "CoreMinimal.h"
#include "EPushableState.generated.h"

UENUM(BlueprintType)
namespace EPushableState {
    enum Type {
        Neutral,
        Contested,
        Captured,
        Stopped,
    };
}

