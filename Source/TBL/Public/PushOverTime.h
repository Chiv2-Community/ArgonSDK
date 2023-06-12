#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PushOverTime.generated.h"

class AHorse;

USTRUCT(BlueprintType)
struct FPushOverTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PushVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHorse* Horse;
    
    TBL_API FPushOverTime();
};

