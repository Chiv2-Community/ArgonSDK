#pragma once
#include "CoreMinimal.h"
#include "ManualReload.generated.h"

USTRUCT(BlueprintType)
struct FManualReload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreMovement: 1;
    
    TBL_API FManualReload();
};

