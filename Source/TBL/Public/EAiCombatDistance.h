#pragma once
#include "CoreMinimal.h"
#include "EAiCombatDistance.generated.h"

UENUM(BlueprintType)
enum class EAiCombatDistance : uint8 {
    Facehug,
    MyAttackRange,
    OutsideEnemyAttackRange,
    StandoffRange,
};

