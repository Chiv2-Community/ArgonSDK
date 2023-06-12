#pragma once
#include "CoreMinimal.h"
#include "BreakableThreshold.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBreakableThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* GenericObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercent;
    
    TBL_API FBreakableThreshold();
};

