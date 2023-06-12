#pragma once
#include "CoreMinimal.h"
#include "FrameTimeBucket.generated.h"

USTRUCT(BlueprintType)
struct FFrameTimeBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    TBL_API FFrameTimeBucket();
};

