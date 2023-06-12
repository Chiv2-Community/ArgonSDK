#pragma once
#include "CoreMinimal.h"
#include "FloatArray.generated.h"

USTRUCT(BlueprintType)
struct FFloatArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Floats;
    
    TBL_API FFloatArray();
};

