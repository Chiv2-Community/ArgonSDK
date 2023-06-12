#pragma once
#include "CoreMinimal.h"
#include "ETBLPS5AttackType.generated.h"

UENUM(BlueprintType)
enum class ETBLPS5AttackType : uint8 {
    Character_Damage,
    Blocked_Attack,
    Environment_Attack,
};

