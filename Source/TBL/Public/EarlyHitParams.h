#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlDirection.h"
#include "ECrowdControlVariant.h"
#include "EEarlyHitPolicy.h"
#include "EarlyHitParams.generated.h"

USTRUCT(BlueprintType)
struct FEarlyHitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEarlyHitPolicy Policy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlVariant CrowdControlVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlDirection CrowdControlDirection;
    
    TBL_API FEarlyHitParams();
};

