#pragma once
#include "CoreMinimal.h"
#include "TurnTowardsCameraParams.generated.h"

USTRUCT(BlueprintType)
struct FTurnTowardsCameraParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateWithInput;
    
    TBL_API FTurnTowardsCameraParams();
};

