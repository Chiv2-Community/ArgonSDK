#pragma once
#include "CoreMinimal.h"
#include "EResultCode.h"
#include "Result.generated.h"

class UCondition;

USTRUCT(BlueprintType)
struct FResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EResultCode::Type> Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCondition* Condition;
    
    TBL_API FResult();
};

