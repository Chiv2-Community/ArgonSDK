#pragma once
#include "CoreMinimal.h"
#include "EPushableComponentMovementState.h"
#include "QueuedMovementState.generated.h"

USTRUCT(BlueprintType)
struct FQueuedMovementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushableComponentMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpiryTime;
    
    TBL_API FQueuedMovementState();
};

