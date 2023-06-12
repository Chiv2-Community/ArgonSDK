#pragma once
#include "CoreMinimal.h"
#include "ProfileRenderSummary.generated.h"

USTRUCT(BlueprintType)
struct FProfileRenderSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    TBL_API FProfileRenderSummary();
};

