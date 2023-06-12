#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Float.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Float {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Float();
};

