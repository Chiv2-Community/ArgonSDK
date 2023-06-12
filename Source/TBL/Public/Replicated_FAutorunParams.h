#pragma once
#include "CoreMinimal.h"
#include "AutorunParams.h"
#include "Replicated_FAutorunParams.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FAutorunParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutorunParams Value;
    
public:
    TBL_API FReplicated_FAutorunParams();
};

