#pragma once
#include "CoreMinimal.h"
#include "DisableRegenInfo.h"
#include "DisabledRegenArray.generated.h"

USTRUCT(BlueprintType)
struct FDisabledRegenArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDisableRegenInfo> Items;
    
    TBL_API FDisabledRegenArray();
};

