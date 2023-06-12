#pragma once
#include "CoreMinimal.h"
#include "EInvocationScope.generated.h"

UENUM(BlueprintType)
namespace EInvocationScope {
    enum Type {
        LastInvocation,
        AllInvocations,
    };
}

