#pragma once
#include "CoreMinimal.h"
#include "ECombatStateEvent.generated.h"

UENUM(BlueprintType)
enum class ECombatStateEvent : uint8 {
    OnStartAttack,
    OnActivateAbility,
};

