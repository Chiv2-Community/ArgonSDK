#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_Decision.generated.h"

USTRUCT(BlueprintType)
struct FUtilityAI_Decision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityAI_Context Context;
    
    TBL_API FUtilityAI_Decision();
};

