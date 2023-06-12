#pragma once
#include "CoreMinimal.h"
#include "ECharacterControlEvent.generated.h"

UENUM(BlueprintType)
enum class ECharacterControlEvent : uint8 {
    OnRelease,
    OnDamage,
    OnBlocked,
    OnDamageOrBlocked,
};

