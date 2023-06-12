#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArrowCamOnCollision.generated.h"

USTRUCT(BlueprintType)
struct FArrowCamOnCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    TBL_API FArrowCamOnCollision();
};

