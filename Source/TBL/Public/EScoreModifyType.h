#pragma once
#include "CoreMinimal.h"
#include "EScoreModifyType.generated.h"

UENUM(BlueprintType)
namespace EScoreModifyType {
    enum Type {
        Delta,
        Absolute,
    };
}

