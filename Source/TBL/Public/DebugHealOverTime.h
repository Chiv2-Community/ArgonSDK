#pragma once
#include "CoreMinimal.h"
#include "DebugHealOverTime.generated.h"

USTRUCT(BlueprintType)
struct FDebugHealOverTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    TBL_API FDebugHealOverTime();
};

