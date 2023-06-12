#pragma once
#include "CoreMinimal.h"
#include "Result.h"
#include "AbilityErrorInfo.generated.h"

class UAbilitySpec;

USTRUCT(BlueprintType)
struct FAbilityErrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySpec* AbilitySpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResult Result;
    
    TBL_API FAbilityErrorInfo();
};

