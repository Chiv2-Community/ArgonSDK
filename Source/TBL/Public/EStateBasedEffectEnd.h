#pragma once
#include "CoreMinimal.h"
#include "EStateBasedEffectEnd.generated.h"

UENUM(BlueprintType)
enum class EStateBasedEffectEnd : uint8 {
    EndOfAttack,
    EndOfRelease,
    SoftRecovery,
};

