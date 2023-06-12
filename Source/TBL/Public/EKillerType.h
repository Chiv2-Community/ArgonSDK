#pragma once
#include "CoreMinimal.h"
#include "EKillerType.generated.h"

UENUM(BlueprintType)
namespace EKillerType {
    enum Type {
        Killer,
        PrimaryAssister,
        SecondaryAssister,
        TakeDowner,
        MAX,
    };
}

