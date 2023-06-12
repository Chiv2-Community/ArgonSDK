#pragma once
#include "CoreMinimal.h"
#include "EInfluenceMapFindMethod.generated.h"

UENUM(BlueprintType)
enum class EInfluenceMapFindMethod : uint8 {
    Spatial,
    Tag,
};

