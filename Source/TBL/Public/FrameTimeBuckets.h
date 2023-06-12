#pragma once
#include "CoreMinimal.h"
#include "FrameTimeBucket.h"
#include "FrameTimeBuckets.generated.h"

USTRUCT(BlueprintType)
struct FFrameTimeBuckets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime0_17ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime17_30ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime30_50ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime50_75ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime75_100ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime100_150ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime150_250ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime250_500ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime500_1000ms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTimeBucket FrameTime1000ms;
    
    TBL_API FFrameTimeBuckets();
};

