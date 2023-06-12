#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TracerPoint.generated.h"

USTRUCT(BlueprintType)
struct FTracerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPoint;
    
    TBL_API FTracerPoint();
};

