#pragma once
#include "CoreMinimal.h"
#include "ETrapEventResult.h"
#include "ServerTrapEventParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FServerTrapEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapEventResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TrapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    TBL_API FServerTrapEventParams();
};

