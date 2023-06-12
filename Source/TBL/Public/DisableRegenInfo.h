#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "DisableRegenInfo.generated.h"

USTRUCT(BlueprintType)
struct FDisableRegenInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStat Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    TBL_API FDisableRegenInfo();
};

