#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_UInt8.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_UInt8 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_UInt8();
};

