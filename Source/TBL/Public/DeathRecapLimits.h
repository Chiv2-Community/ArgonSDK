#pragma once
#include "CoreMinimal.h"
#include "DeathRecapLimits.generated.h"

USTRUCT(BlueprintType)
struct FDeathRecapLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillConsiderationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageThreshold;
    
    TBL_API FDeathRecapLimits();
};

