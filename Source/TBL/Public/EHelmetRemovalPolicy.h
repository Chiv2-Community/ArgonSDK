#pragma once
#include "CoreMinimal.h"
#include "EHelmetRemovalPolicy.generated.h"

UENUM(BlueprintType)
enum class EHelmetRemovalPolicy : uint8 {
    DoNothing,
    RemoveHelmet,
};

