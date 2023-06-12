#pragma once
#include "CoreMinimal.h"
#include "NextStateTimer.generated.h"

USTRUCT(BlueprintType)
struct FNextStateTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimerHandle;
    
    TBL_API FNextStateTimer();
};

