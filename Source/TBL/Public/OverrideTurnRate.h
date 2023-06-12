#pragma once
#include "CoreMinimal.h"
#include "BlendParams.h"
#include "OverrideTurnRate.generated.h"

USTRUCT(BlueprintType)
struct FOverrideTurnRate : public FBlendParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAngle;
    
    TBL_API FOverrideTurnRate();
};

