#pragma once
#include "CoreMinimal.h"
#include "EWeaponMaterial.generated.h"

UENUM(BlueprintType)
enum class EWeaponMaterial : uint8 {
    Metal,
    Wood,
    Shield,
    Body,
    Arrow,
};

