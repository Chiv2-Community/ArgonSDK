#pragma once
#include "CoreMinimal.h"
#include "EOnHitEffect.generated.h"

UENUM(BlueprintType)
enum class EOnHitEffect : uint8 {
    None,
    Interrupt,
    Stagger,
    Stun,
    Knockdown,
    DownedStagger,
    Getup,
};

