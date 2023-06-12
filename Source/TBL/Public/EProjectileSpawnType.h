#pragma once
#include "CoreMinimal.h"
#include "EProjectileSpawnType.generated.h"

UENUM(BlueprintType)
enum class EProjectileSpawnType : uint8 {
    None,
    UseInventoryItem,
    UseQuickThrowItem,
    UseAmmo,
};

