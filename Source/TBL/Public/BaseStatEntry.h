#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "BaseStatEntry.generated.h"

USTRUCT(BlueprintType)
struct FBaseStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStat Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    TBL_API FBaseStatEntry();
};

