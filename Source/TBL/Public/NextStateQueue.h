#pragma once
#include "CoreMinimal.h"
#include "ECrowdControlVariant.h"
#include "NextStateQueue.generated.h"

USTRUCT(BlueprintType)
struct FNextStateQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdControlVariant Variant;
    
    TBL_API FNextStateQueue();
};

