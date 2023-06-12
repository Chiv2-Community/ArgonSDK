#pragma once
#include "CoreMinimal.h"
#include "MovementAnimationEvent.h"
#include "Replicated_FMovementAnimationEvent.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FMovementAnimationEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementAnimationEvent Value;
    
public:
    TBL_API FReplicated_FMovementAnimationEvent();
};

