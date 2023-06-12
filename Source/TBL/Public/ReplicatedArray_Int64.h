#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Int64.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Int64 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Int64();
};

