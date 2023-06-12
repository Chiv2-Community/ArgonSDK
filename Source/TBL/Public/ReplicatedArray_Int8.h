#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Int8.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Int8 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Int8();
};

