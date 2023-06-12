#pragma once
#include "CoreMinimal.h"
#include "EHintType.generated.h"

UENUM(BlueprintType)
namespace EHintType {
    enum Type {
        Any,
        General,
        Gameplay,
        Frontend,
        Specific,
    };
}

