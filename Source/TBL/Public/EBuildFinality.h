#pragma once
#include "CoreMinimal.h"
#include "EBuildFinality.generated.h"

UENUM(BlueprintType)
enum class EBuildFinality : uint8 {
    Development,
    PublicTest,
    Final,
};

