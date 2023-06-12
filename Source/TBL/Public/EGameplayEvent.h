#pragma once
#include "CoreMinimal.h"
#include "EGameplayEvent.generated.h"

UENUM(BlueprintType)
enum class EGameplayEvent : uint8 {
    PlayerRevived,
    RevivedPlayer,
};

