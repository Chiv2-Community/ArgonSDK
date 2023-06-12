#pragma once
#include "CoreMinimal.h"
#include "DelayedQueueHeldInputs.generated.h"

USTRUCT(BlueprintType)
struct FDelayedQueueHeldInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreLastAttackInput: 1;
    
    TBL_API FDelayedQueueHeldInputs();
};

