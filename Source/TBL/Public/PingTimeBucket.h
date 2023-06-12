#pragma once
#include "CoreMinimal.h"
#include "PingTimeBucket.generated.h"

USTRUCT(BlueprintType)
struct FPingTimeBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    TBL_API FPingTimeBucket();
};

