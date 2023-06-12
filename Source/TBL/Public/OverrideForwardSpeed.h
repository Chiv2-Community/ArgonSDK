#pragma once
#include "CoreMinimal.h"
#include "OverrideForwardSpeed.generated.h"

USTRUCT(BlueprintType)
struct FOverrideForwardSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelRate;
    
    TBL_API FOverrideForwardSpeed();
};

