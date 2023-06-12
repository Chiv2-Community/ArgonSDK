#pragma once
#include "CoreMinimal.h"
#include "ETrapEventResult.generated.h"

UENUM(BlueprintType)
enum class ETrapEventResult : uint8 {
    None,
    Damage,
    Stagger,
    Knockdown,
    Kill,
};

