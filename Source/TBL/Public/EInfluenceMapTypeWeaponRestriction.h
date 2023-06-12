#pragma once
#include "CoreMinimal.h"
#include "EInfluenceMapTypeWeaponRestriction.generated.h"

UENUM(BlueprintType)
enum class EInfluenceMapTypeWeaponRestriction : uint8 {
    Any,
    RangedWeaponOnly,
    ThrowableWeaponOnly,
    MeleeWeaponOnly,
};

