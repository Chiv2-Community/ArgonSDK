#pragma once
#include "CoreMinimal.h"
#include "MovementDebugSyncEvent.generated.h"

USTRUCT(BlueprintType)
struct FMovementDebugSyncEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    TBL_API FMovementDebugSyncEvent();
};

