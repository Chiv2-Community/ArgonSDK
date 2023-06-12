#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_UInt64.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_UInt64 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_UInt64();
};

