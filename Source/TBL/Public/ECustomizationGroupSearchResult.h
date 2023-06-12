#pragma once
#include "CoreMinimal.h"
#include "ECustomizationGroupSearchResult.generated.h"

UENUM(BlueprintType)
enum class ECustomizationGroupSearchResult : uint8 {
    WithoutGroups,
    WithGroups,
};

