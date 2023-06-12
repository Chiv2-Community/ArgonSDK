#pragma once
#include "CoreMinimal.h"
#include "ETeamCapturePointComponentState.generated.h"

UENUM(BlueprintType)
namespace ETeamCapturePointComponentState {
    enum Type {
        Neutral,
        Contested,
        Neutralizing,
        Capturing,
        Captured,
        Invalid,
    };
}

