#pragma once
#include "CoreMinimal.h"
#include "AIRanges.generated.h"

USTRUCT(BlueprintType)
struct FAIRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Other;
    
    TBL_API FAIRanges();
};

