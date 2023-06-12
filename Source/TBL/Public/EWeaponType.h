#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    Sword2h,
    Sword1h,
    Axe1h,
    Mace1h,
    ProjectileWeapon,
};

