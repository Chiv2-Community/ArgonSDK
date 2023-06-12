#pragma once
#include "CoreMinimal.h"
#include "EMatchWinType.generated.h"

UENUM(BlueprintType)
enum class EMatchWinType : uint8 {
    Team,
    Map,
    Both,
};

