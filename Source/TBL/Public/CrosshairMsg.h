#pragma once
#include "CoreMinimal.h"
#include "CrosshairMsg.generated.h"

USTRUCT(BlueprintType)
struct FCrosshairMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamId;
    
    TBL_API FCrosshairMsg();
};

