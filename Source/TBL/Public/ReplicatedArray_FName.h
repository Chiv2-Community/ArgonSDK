#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_FName.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_FName {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_FName();
};

