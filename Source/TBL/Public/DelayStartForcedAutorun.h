#pragma once
#include "CoreMinimal.h"
#include "AutorunParams.h"
#include "DelayStartForcedAutorun.generated.h"

USTRUCT(BlueprintType)
struct FDelayStartForcedAutorun {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SyncMovementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutorunParams Params;
    
    TBL_API FDelayStartForcedAutorun();
};

