#pragma once
#include "CoreMinimal.h"
#include "MovementMetrics.generated.h"

USTRUCT(BlueprintType)
struct FMovementMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSmoothCorrectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSmoothClientPositionTime;
    
    TBL_API FMovementMetrics();
};

