#pragma once
#include "CoreMinimal.h"
#include "EOnProjectileHitEffect.generated.h"

UENUM(BlueprintType)
enum class EOnProjectileHitEffect : uint8 {
    Stick,
    Bounce,
    Destroy,
};

