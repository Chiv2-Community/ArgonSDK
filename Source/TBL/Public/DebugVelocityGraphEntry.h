#pragma once
#include "CoreMinimal.h"
#include "DebugVelocityGraphEntry.generated.h"

USTRUCT(BlueprintType)
struct FDebugVelocityGraphEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasMovementActions: 1;
    
    TBL_API FDebugVelocityGraphEntry();
};

