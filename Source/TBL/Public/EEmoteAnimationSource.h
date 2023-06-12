#pragma once
#include "CoreMinimal.h"
#include "EEmoteAnimationSource.generated.h"

UENUM(BlueprintType)
enum class EEmoteAnimationSource : uint8 {
    None,
    Character,
    Weapon,
};

