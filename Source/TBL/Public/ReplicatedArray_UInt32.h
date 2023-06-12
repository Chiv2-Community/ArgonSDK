#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_UInt32.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_UInt32 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_UInt32();
};

