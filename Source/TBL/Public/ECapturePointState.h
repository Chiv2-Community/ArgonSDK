#pragma once
#include "CoreMinimal.h"
#include "ECapturePointState.generated.h"

UENUM(BlueprintType)
namespace ECapturePointState {
    enum Type {
        Neutral,
        Contested,
        Neutralizing,
        Capturing,
        Captured,
        Invalid,
    };
}

