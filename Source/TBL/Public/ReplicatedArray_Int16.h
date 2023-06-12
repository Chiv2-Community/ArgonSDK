#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Int16.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Int16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Int16();
};

