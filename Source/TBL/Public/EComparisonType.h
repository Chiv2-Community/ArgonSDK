#pragma once
#include "CoreMinimal.h"
#include "EComparisonType.generated.h"

UENUM(BlueprintType)
namespace EComparisonType {
    enum Type {
        Equals,
        NotEquals,
        GreaterThan,
        GreaterThanEquals,
        LessThan,
        LessThanEquals,
    };
}

