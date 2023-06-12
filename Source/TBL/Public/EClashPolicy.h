#pragma once
#include "CoreMinimal.h"
#include "EClashPolicy.generated.h"

UENUM(BlueprintType)
enum class EClashPolicy : uint8 {
    Nothing,
    Clash,
};

