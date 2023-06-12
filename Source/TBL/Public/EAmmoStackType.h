#pragma once
#include "CoreMinimal.h"
#include "EAmmoStackType.generated.h"

UENUM(BlueprintType)
enum class EAmmoStackType : uint8 {
    Exhaustable,
    Unlimited,
};

