#pragma once
#include "CoreMinimal.h"
#include "OverrideMaxSpeed.generated.h"

USTRUCT(BlueprintType)
struct FOverrideMaxSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    TBL_API FOverrideMaxSpeed();
};

