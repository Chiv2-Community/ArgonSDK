#pragma once
#include "CoreMinimal.h"
#include "ERangedAttackCategory.generated.h"

UENUM(BlueprintType)
enum class ERangedAttackCategory : uint8 {
    Light,
    Medium,
    Heavy,
    Great,
    Projectile,
    Unblockable,
};

