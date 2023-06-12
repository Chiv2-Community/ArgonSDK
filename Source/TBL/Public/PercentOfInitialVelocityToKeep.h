#pragma once
#include "CoreMinimal.h"
#include "PercentOfInitialVelocityToKeep.generated.h"

USTRUCT(BlueprintType)
struct FPercentOfInitialVelocityToKeep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strafe;
    
    TBL_API FPercentOfInitialVelocityToKeep();
};

