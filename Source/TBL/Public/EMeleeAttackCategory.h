#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackCategory.generated.h"

UENUM(BlueprintType)
enum class EMeleeAttackCategory : uint8 {
    Light,
    Medium,
    Heavy,
    Great,
};

