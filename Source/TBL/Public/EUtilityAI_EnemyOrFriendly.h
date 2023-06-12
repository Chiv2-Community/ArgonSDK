#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_EnemyOrFriendly.generated.h"

UENUM(BlueprintType)
enum class EUtilityAI_EnemyOrFriendly : uint8 {
    All,
    Enemies,
    Friendlies,
    EUtilityAI_MAX UMETA(Hidden),
};

