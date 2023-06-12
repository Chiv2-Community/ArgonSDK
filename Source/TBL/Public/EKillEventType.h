#pragma once
#include "CoreMinimal.h"
#include "EKillEventType.generated.h"

UENUM(BlueprintType)
namespace EKillEventType {
    enum Type {
        Killer,
        Killed,
        MAX,
    };
}

