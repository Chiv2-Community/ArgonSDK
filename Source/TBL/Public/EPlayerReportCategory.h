#pragma once
#include "CoreMinimal.h"
#include "EPlayerReportCategory.generated.h"

UENUM(BlueprintType)
enum class EPlayerReportCategory : uint8 {
    Cheating,
    Greifing,
    NegativeBehavior,
    Harrassment,
};

