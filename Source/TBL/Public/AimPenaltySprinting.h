#pragma once
#include "CoreMinimal.h"
#include "AimPenaltySprinting.generated.h"

USTRUCT(BlueprintType)
struct FAimPenaltySprinting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPenalty;
    
    TBL_API FAimPenaltySprinting();
};

