#pragma once
#include "CoreMinimal.h"
#include "ResetToTransform.h"
#include "Replicated_FResetToTransform.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FResetToTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetToTransform Value;
    
public:
    TBL_API FReplicated_FResetToTransform();
};

