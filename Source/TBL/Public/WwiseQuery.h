#pragma once
#include "CoreMinimal.h"
#include "WwiseQuery.generated.h"

USTRUCT(BlueprintType)
struct FWwiseQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutValue;
    
    TBL_API FWwiseQuery();
};

