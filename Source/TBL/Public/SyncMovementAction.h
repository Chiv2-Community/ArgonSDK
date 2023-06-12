#pragma once
#include "CoreMinimal.h"
#include "ESyncMovementType.h"
#include "SyncMovementAction.generated.h"

USTRUCT(BlueprintType)
struct FSyncMovementAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESyncMovementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QueuedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    TBL_API FSyncMovementAction();
};

