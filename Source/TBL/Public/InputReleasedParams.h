#pragma once
#include "CoreMinimal.h"
#include "InputReleasedParams.generated.h"

USTRUCT(BlueprintType)
struct FInputReleasedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputActionName;
    
    TBL_API FInputReleasedParams();
};

