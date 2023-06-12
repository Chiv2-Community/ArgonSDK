#pragma once
#include "CoreMinimal.h"
#include "EAbilityDescriptorCategory.generated.h"

UENUM(BlueprintType)
namespace EAbilityDescriptorCategory {
    enum Type {
        None,
        Damage,
        DamageType,
        CastTime,
        CooldownTime,
        AmmoCount,
        MAX,
    };
}

