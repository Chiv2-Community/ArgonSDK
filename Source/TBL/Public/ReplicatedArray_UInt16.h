#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_UInt16.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_UInt16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_UInt16();
};

