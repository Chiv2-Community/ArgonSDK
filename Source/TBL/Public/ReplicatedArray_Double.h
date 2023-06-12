#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_Double.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_Double {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_Double();
};

