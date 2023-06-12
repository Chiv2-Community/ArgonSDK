#pragma once
#include "CoreMinimal.h"
#include "PingTimeBucket.h"
#include "PingTimeBuckets.generated.h"

USTRUCT(BlueprintType)
struct FPingTimeBuckets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime0_30ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime30_60ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime60_100ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime100_150ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime150_200ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime200_300ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime300_400ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime400_500ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime500_750ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime750_1000ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingTimeBucket PingTime1000ms;
    
    TBL_API FPingTimeBuckets();
};

