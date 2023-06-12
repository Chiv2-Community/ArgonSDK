#pragma once
#include "CoreMinimal.h"
#include "PerMinuteBucket.generated.h"

USTRUCT(BlueprintType)
struct FPerMinuteBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AverageFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AveragePingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AvailablePhysicalMemory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UsedVirtualMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProcessUptime;
    
    TBL_API FPerMinuteBucket();
};

