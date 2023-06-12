#pragma once
#include "CoreMinimal.h"
#include "EAttackDirection.generated.h"

UENUM(BlueprintType)
namespace EAttackDirection {
    enum Type {
        FromInitiator,
        FromShapeLocation,
    };
}

