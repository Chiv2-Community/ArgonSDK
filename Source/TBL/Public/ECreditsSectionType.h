#pragma once
#include "CoreMinimal.h"
#include "ECreditsSectionType.generated.h"

UENUM(BlueprintType)
enum class ECreditsSectionType : uint8 {
    Normal,
    MultiColumn,
    Header1,
    Header2,
    Header3,
    BigSeparator,
    Separator,
};

