#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_UVotingInstances.generated.h"

class UVotingInstance;

USTRUCT(BlueprintType)
struct FReplicatedArray_UVotingInstances {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVotingInstance*> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_UVotingInstances();
};

