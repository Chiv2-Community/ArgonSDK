#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Int32.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Int32 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Int32();
};

