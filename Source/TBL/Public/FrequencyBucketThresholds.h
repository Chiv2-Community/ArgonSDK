#pragma once
#include "CoreMinimal.h"
#include "FrequencyBucketThresholds.generated.h"

USTRUCT(BlueprintType)
struct FFrequencyBucketThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MaxActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 NumBuckets;
    
    TBL_API FFrequencyBucketThresholds();
};

