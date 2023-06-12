#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovementAnimationEvent.generated.h"

USTRUCT(BlueprintType)
struct FMovementAnimationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndMovement: 1;
    
    TBL_API FMovementAnimationEvent();
};

