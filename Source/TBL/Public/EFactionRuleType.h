#pragma once
#include "CoreMinimal.h"
#include "EFactionRuleType.generated.h"

UENUM(BlueprintType)
enum class EFactionRuleType : uint8 {
    EnemyTeam,
    FriendlyTeam,
    AnyTeam,
};

