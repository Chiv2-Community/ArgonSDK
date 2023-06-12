#pragma once
#include "CoreMinimal.h"
#include "TDMRout.generated.h"

USTRUCT(BlueprintType)
struct FTDMRout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    TBL_API FTDMRout();
};

