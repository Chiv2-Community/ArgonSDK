#pragma once
#include "CoreMinimal.h"
#include "DebugMovementAction.generated.h"

class UMovementInstance;

USTRUCT(BlueprintType)
struct FDebugMovementAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementInstance* MovementInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugStr;
    
    TBL_API FDebugMovementAction();
};

