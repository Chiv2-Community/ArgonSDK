#pragma once
#include "CoreMinimal.h"
#include "EAttackTransition.generated.h"

UENUM(BlueprintType)
enum class EAttackTransition : uint8 {
    Normal,
    Combo,
    Riposte,
};

